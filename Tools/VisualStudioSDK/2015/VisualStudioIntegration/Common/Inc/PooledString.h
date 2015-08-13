/*--------------------------------------------------------------------------*
 *
 *  Microsoft Visual Studio
 *  Copyright (C) Microsoft Corporation, 1995 - 2008
 *
 *  File:       PooledString.h
 *
 *  Contents:   Implementation file for CPooledString
 *
 *  History:    8-Feb-2008 jeffro    Created
 *
 *--------------------------------------------------------------------------*/
#ifndef _POOLEDSTRING_H_
#define _POOLEDSTRING_H_

#pragma once
#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
#include <map>
#include <unordered_map>
#include <iterator> // needed for std::inserter
#include "optpragmas.h"
#include "LockHelper.h"

class CStringHash
{
public:
    template<typename BaseType, class StringTraits>
    size_t operator() (const CStringT<BaseType, StringTraits>& str) const
    {
        return (CElementTraits<CStringT<BaseType, StringTraits>>::Hash (str));
    }
};


/*+-------------------------------------------------------------------------*
 * CPooledStringT
 *
 * This class is intended to reduce the memory consumed by multiple, identical
 * CString objects.  The linker will fold identical C-style strings (char* or
 * wchar_t*) into a single instance, but no such mechanism exists for CStrings.
 * 
 * CPooledString maintains a static pool of strings that are represented by
 * CPooledString objects.  Each string in the pool as a reference count
 * (unrelated to the internal refcount maintained in the header portion of a
 * CString object).  As CPooledStrings are created, the pool is searched for
 * a CString matching the content of the CPooledString.  If it's in the pool
 * already, the refcount is bumped; if it's not there yet  it's added with a
 * refcount of 1.  As CPooledStrings are destroyed, the refcount is
 * decremented and if it goes to zero the CString is removed from the pool.
 * 
 * Each CPooledString contains a pointer to a CString and its refcount in the
 * pool; its public API hides the fact that the string may be shared among
 * multiple CPooledString objects.
 * 
 * CPooledString isn't intended to be a full-service replacement for CString.
 * Specifically, CPooledStrings are immutable.  (Well, almost immutable. 
 * They can be changed by assignment (i.e. by completely replacing the 
 * contained CString), but not by mutating the contained CString in place.)
 * It defines a set of constructors and assignment operators, a set of
 * comparison operators, and implicit conversions to const CString& and
 * LPCxSTR.  If you want to do other CString-like things (find its length,
 * tokenize it, extract a substring, etc.), you can obtain a const reference
 * to the inner string by using the implicit conversion or by using 
 * GetStringObject.
 *-----------------------------------------------------------------(jeffro)-*/
template<class StringType>
class CPooledStringT
{
private:
    // This lock needs to be acquired before looking up items in the string pool
    // or removing them. It provides mutual exclusion so that we don't try to 
    // double add strings or remove one that someone is in the process of taking
    // a shared interest in.
    DECLARE_STATIC_LOCK(RecursiveMutex, s_poolLock);

public:
    typedef typename StringType                 StringType;
    typedef typename StringType::XCHAR          XCHAR;
    typedef typename StringType::PXSTR          PXSTR;
    typedef typename StringType::PCXSTR         PCXSTR;

    typedef typename std::unordered_map<StringType, volatile unsigned int, CStringHash> PoolType;
    typedef typename PoolType::value_type PairType;

    /*+-------------------------------------------------------------------------*
     * CPooledStringT
     *
     * Constructs a CPooledStringT object. 
     *-----------------------------------------------------------------(jeffro)-*/
    CPooledStringT (const StringType& s = StringType()) : m_pPoolElement(nullptr)
    {
        InitFrom (LookupWithAddRef (s));
    }

    CPooledStringT (const CPooledStringT& other) : m_pPoolElement(nullptr)
    {
        InitFromWithAddRef (other);
    }

    CPooledStringT (PCXSTR psz) : m_pPoolElement(nullptr)
    {
        InitFrom (LookupWithAddRef(CCachedInitString(psz)));
    }


    /*+-------------------------------------------------------------------------*
     * CPooledStringT::~CPooledStringT
     *
     * Destroys a CPooledStringT object.
     *-----------------------------------------------------------------(jeffro)-*/
    ~CPooledStringT()
    {
        Release();
    }


    /*+-------------------------------------------------------------------------*
     * CPooledStringT::operator=
     *
     * Assignment operators.
     *-----------------------------------------------------------------(jeffro)-*/
    CPooledStringT& operator= (const StringType& s) 
    {
        CopyFrom (s);
        return (*this);
    }

    CPooledStringT& operator= (const CPooledStringT& other)
    {
        CopyFrom (other);
        return (*this);
    }

    CPooledStringT& operator= (PCXSTR psz)
    {
        CopyFrom (CCachedInitString(psz));
        return (*this);
    }

    // THREADING: We don't have to worry about threading concerns in any of the comparison
    // or cast operators. We don't support concurrent use of the SAME CPooledStringT object
    // across threads, just different CPooledStringT objects that point to the same underlying
    // pool entry.

    /*+-------------------------------------------------------------------------*
     * CPooledStringT::operator==
     * CPooledStringT::operator!=
     *
     * (In-) equality operators.
     *-----------------------------------------------------------------(jeffro)-*/
    bool operator== (const StringType& s) const
    {
        return (InnerString == s);
    }

    bool operator== (const CPooledStringT& other) const
    {
        /*
         * optimize by comparing pointers, since we know that two identical
         * pooled strings will share a string representation
         */
        return (m_pPoolElement == other.m_pPoolElement);
    }

    bool operator== (PCXSTR psz) const
    {
        return (InnerString == psz);
    }

    bool operator!= (const StringType& s) const
    {
        return !(*this == s);
    }

    bool operator!= (const CPooledStringT& other) const
    {
        return !(*this == other);
    }

    bool operator!= (PCXSTR psz) const
    {
        return !(*this == psz);
    }


    /*+-------------------------------------------------------------------------*
     * CPooledStringT::operator<
     *
     * This operator is required for sorting by STL collections and algorithms.
     *-----------------------------------------------------------------(jeffro)-*/
    bool operator< (const StringType& s) const
    {
        return (InnerString < s);
    }

    bool operator< (const CPooledStringT& other) const
    {
        return (InnerString < other.InnerString);
    }

    bool operator< (PCXSTR psz) const
    {
        return (InnerString < psz);
    }


    /*+-------------------------------------------------------------------------*
     * CPooledStringT::operator PCXSTR
     * CPooledStringT::operator const StringType&
     *
     * Casting operators
     *-----------------------------------------------------------------(jeffro)-*/
    operator PCXSTR() const
    {
        return (InnerString);
    }

    operator const StringType&() const
    {
        return (InnerString);
    }


    /*+-------------------------------------------------------------------------*
     * CPooledStringT::GetString
     * CPooledStringT::GetStringObject
     *
     * Allow access to the contained string as an object or a character pointer.
     *-----------------------------------------------------------------(jeffro)-*/
    PCXSTR GetString() const
    {
        return (InnerString);
    }

    const StringType& GetStringObject() const
    {
        return (InnerString);
    }

    int GetLength() const throw()
    {
        return (InnerString.GetLength());
    }

    bool IsEmpty() const throw()
    {
        return (InnerString.IsEmpty());
    }

    /*+-------------------------------------------------------------------------*
     * CPooledStringT::GetPoolSize
     *
     * Returns the number of strings in the string pool.  Mostly useful for
     * debugging purposes.
     *-----------------------------------------------------------------(jeffro)-*/
    static size_t GetPoolSize()
    {
        RAII_LOCK_HOLDER(s_poolLock);
        return (GetPool().size());
    }


    /*+-------------------------------------------------------------------------*
     * CPooledStringT::GetPoolMemUsage
     *
     * Returns the memory occupied by the strings in the pool (not including
     * the overhead of the pool itself).  If the optional pcbWouldBe parameter
     * is passed, then the amount of memory that the strings would occupy if
     * not pooled.
     * 
     * This function is useful for diagnostics only.
     *-----------------------------------------------------------------(jeffro)-*/
    static size_t GetPoolMemUsage (size_t* pcbWouldBe = NULL)
    {
        RAII_LOCK_HOLDER(s_poolLock);
        size_t cbTotal = 0;

        if (pcbWouldBe != NULL)
            *pcbWouldBe = 0;

        PoolType::const_iterator it;

        for (it = GetPool().begin(); it != GetPool().end(); ++it)
        {
            const StringType&                 s = it->first;
            const volatile unsigned int&  cRefs = it->second;

            /*
             * ATL allocates memory blocks for strings in multiples of 8 characters
             */
            const size_t cb = sizeof(XCHAR) * AtlAlignUp (s.GetLength()+1, 8);

            cbTotal += cb;

            if (pcbWouldBe != NULL)
                *pcbWouldBe += cb * cRefs;
        }

        return (cbTotal);
    }

#ifdef DEBUG
    /*+-------------------------------------------------------------------------*
     * CPooledStringT::ShowPoolStats
     *
     * Shows statistics for the string pool, optionally dumping the pool contents
     * to the debugger.
     *-----------------------------------------------------------------(jeffro)-*/
    static void ShowPoolStats (bool fDumpPool)
    {
        VSASSERT(GetMainThreadId() == GetCurrentThreadId(), __FUNCSIG__ ": Called off of UI thread. This is not supported as this method shows UI.");

        if (fDumpPool)
        {  
            CWaitCursor wait;
            DumpPool();
        }

        size_t cbWouldBe;
        const size_t cbTotal   = GetPoolMemUsage (&cbWouldBe);
        const size_t cbSavings = cbWouldBe - cbTotal;

        StringType strFormat = L"Pooled string count:\t\t\t%d\n"
                               L"Pool memory usage:  \t\t%d bytes\n"
                               L"Individual strings would have used:\t%d bytes\n"
                               L"Memory savings:\t\t\t%d bytes (%d%%)";

        StringType strMessage;
        strMessage.Format (strFormat,
                           GetPoolSize(),
                           cbTotal,
                           cbWouldBe,
                           cbSavings,
                           (cbSavings * 100) / cbWouldBe);

        if (fDumpPool)
        {
            strMessage += L"\n\nSee debugger Output window for string pool contents.";
        }

        MessageBox (Main_hwndMainFrame, strMessage, L"String Pool Stats", MB_OK);
    }

    static void DumpPool()
    {
        StringType strMessage;
        StringType strFormat = L"String pool (%d elements)\n"
                               L"Refs String\n"
                               L"---- ---------------------\n";

        RAII_LOCK_HOLDER(s_poolLock);
        strMessage.Format (strFormat, GetPool().size());
        OutputDebugString (strMessage);

        /*
         * copy from a hash map to a normal map so strings will be sorted
         * alphabetically instead of by hash value
         */
        typedef std::map<StringType, size_t> SortedPoolType;
        SortedPoolType sortedPool;
        std::copy (GetPool().begin(), GetPool().end(), std::inserter(sortedPool, sortedPool.end()));

        strFormat = L"%4d %s\n";

        SortedPoolType::const_iterator it;
        for (it = sortedPool.begin(); it != sortedPool.end(); ++it)
        {
            const StringType& s     = it->first;
            const size_t&     cRefs = it->second;

            strMessage.Format (strFormat, cRefs, s);
            OutputDebugString (strMessage);
        }
    }
#endif

    
private:
    /*+-------------------------------------------------------------------------*
     * CPooledStringT::InnerString
     *
     *
     *-----------------------------------------------------------------(joshs)-*/
    __declspec(property(get=get_InnerString)) const StringType& InnerString;

    const StringType& get_InnerString() const
    {
        if (!m_pPoolElement)
        {
            VSFAIL("m_pPoolElement was not initialized or was already released!");
            return s_emptyStringPair.first;
        }
        return m_pPoolElement->first;
    }
   
    unsigned int IncrementRefCount()
    {
        if (!m_pPoolElement)
        {
            VSFAIL("m_pPoolElement was not initialized or was already released!");
            return 0;
        }
        return InterlockedIncrement(&m_pPoolElement->second);
    }

    unsigned int DecrementRefCount()
    {
        /*
         * last ref on this pool string?  remove it from the pool
         *
         * It may seem counter-intuitive but we need to lock the pool for decrement. 
         * Specifically we need to avoid someone else, concurrently, having seen this 
         * entry in the pool and gone down the 'let's copy the existing entry' path, 
         * from having said entry deleted from the map due to our InterlockedDecrement 
         * + (possible) GetPool().erase call below BEFORE they have done their 
         * InterlockedIncrement. We don't need a pool lock for increment as we can't 
         * cause bad things to happen by increasing the count while someone is 
         * concurrently trying to use said object.
         */
        RAII_LOCK_HOLDER(s_poolLock);
        const unsigned int newRefCount = InterlockedDecrement(&m_pPoolElement->second);
        if (newRefCount == 0)
        {
            PoolType::iterator it = GetPool().find(InnerString);

            if (it != GetPool().end())
            {
                GetPool().erase(it);
            }
            else
            {
                VSFAIL("string should be in the pool");
            }
        }

        return newRefCount;
    }

    /*+-------------------------------------------------------------------------*
     * CPooledStringT::InitFrom
     *
     *
     *-----------------------------------------------------------------(jeffro)-*/
    void InitFromWithAddRef (const CPooledStringT& other)
    {
        // THREADING: This is called from CopyFrom and the ctor. In neither
        // case do we care about concurrent users of THIS specific object and
        // thus we have no reason/need to protect m_pPoolElement in any way. 
        // We DO need to hold the pool lock so we can ensure that other.m_pPoolElement
        // isn't deleted before we can add our reference to it.
        RAII_LOCK_HOLDER(s_poolLock);
        m_pPoolElement = other.m_pPoolElement;
        AddRef();
    }

    void InitFrom (PairType& pair)
    {
        // THREADING: See above, same idea. We don't want PairType being deleted
        // out from under us.
        RAII_LOCK_HOLDER(s_poolLock);
        m_pPoolElement = &pair;
    }

    /*+-------------------------------------------------------------------------*
     * CPooledStringT::CopyFrom
     *
     *
     *-----------------------------------------------------------------(jeffro)-*/
    void CopyFrom (const CPooledStringT& s)
    {
        // THREADING: We don't need any protection here as a race on the 
        // this != s would imply concurrent users of the SAME object instance
        // (not the same underlying pooled string), which we don't support.
        if (*this != s)
        {
            Release();
            InitFromWithAddRef (s);
        }
    }

    void CopyFrom (const StringType& s)
    {
        // THREADING: We don't need any protection here as a race on the 
        // this != s would imply concurrent users of the SAME object instance
        // (not the same underlying pooled string), which we don't support.
        if (*this != s)
        {
            Release();
            InitFrom (LookupWithAddRef (s));
        }
    }


#pragma VS_OPTIMIZE_FAVOR_SPEED

    /*+-------------------------------------------------------------------------*
     * CPooledStringT::AddRef
     *
     *
     *-----------------------------------------------------------------(jeffro)-*/
    void AddRef()
    {
        IncrementRefCount();
    }


    /*+-------------------------------------------------------------------------*
     * CPooledStringT::Release
     *
     *
     *-----------------------------------------------------------------(jeffro)-*/
    void Release()
    {
        DecrementRefCount();
        m_pPoolElement = nullptr;
    }

#pragma VS_OPTIMIZE_DEFAULT


    /*+-------------------------------------------------------------------------*
     * CPooledStringT::LookupWithAddRef
     *
     * Finds the given string in the pool (adding if necessary) and returns an
     * iterator to the string's entry in the pool after incrementing the items
     * reference count. Causes both lookup/retrieval and creation/retrieval to 
     * be atomic wrt to concurrent requests and data-race safe from concurrent 
     * decrements
     *-----------------------------------------------------------------(jeffro)-*/
    static PairType& LookupWithAddRef (const StringType& s)
    {
        /*
         * optimize the common case of looking up an empty string
         */
        if (s.IsEmpty())
        {
            // No need to lock, as s_emptyStringPair.second can never be 0 and thus
            // we will never attempt to remove it from the pool (which would fail anyway).
            InterlockedIncrement(&s_emptyStringPair.second);
            return s_emptyStringPair;
        }
        
        std::pair<PoolType::iterator, bool> pr;
        {
            RAII_LOCK_HOLDER(s_poolLock)

            /*
             * Insert the string.  If the string was already in the pool,
             * pr.first will be an iterator to its existing entry; if it's
             * a new string, pr.first will be an iterator to the new entry
             */
            pr = GetPool().insert(std::make_pair(s, 0));

            /* Increment the ref-count while still holding the lock to ensure our
             * mutual exclusion vis-a-vis s_poolLock in DecrementRefCount works.
             * Since we insert with a 0 ref-count on first entry this is correct
             * whether we just inserted a new string or are adding a ref to an existing 
             * one.
             */
            InterlockedIncrement(&pr.first->second);
        }

        PoolType::iterator itEntry   = pr.first;

        /*
         * make sure that for any item the refcount is non-zero.
         * We can't make any specific count guarantees for a new 
         * item because it could be concurrently accessed the 
         * instruction after we drop s_poolLock and thus already be 
         * > 1, but no entry should ever be <= 0.
         */
        VSASSERT (itEntry->second >  0,
                  "Unexpected refcount for string pool entry");

        return (*itEntry);
    }


    /*+-------------------------------------------------------------------------*
     * CPooledStringT::GetPool
     *
     *
     *-----------------------------------------------------------------(joshs)-*/
    static PoolType& GetPool()
    {
        return s_pool;
    }


private:
    // Store a pointer to our pair<StringType, size_t> in the pool so AddRef and Release can avoid
    // doing a lookup operation.  unordered_map iterators may be invalidated by insertion into the
    // map, so we can't store an iterator.
    typename PairType* m_pPoolElement;

    static typename PoolType s_pool;
    static typename PairType s_emptyStringPair;


    /*+-------------------------------------------------------------------------*
     * CPooledStringT::CCachedInitString
     *
     * This class serves as a cached location for initializing CPooledStringTs.
     * CPooledStringT's PCXSTR constructor must create a temporary StringType to
     * use as a key for use in Lookup.  Profiling indicated that the PCXSTR
     * constructor was called very frequently, so the alloc/copy/free overhead
     * for the temporary StringType was significant.
     * 
     * By using this cache we can remove the most expensive portion of that
     * overhead, namely the alloc/free.
     *-----------------------------------------------------------------(jeffro)-*/
    class CCachedInitString
    {
    public:
        CCachedInitString (PCXSTR psz) 
        {
            s_cache = psz;
        }

        ~CCachedInitString()
        {
            /*
             * if our cached string has grown larger that we want to keep
             * around long-term, empty it out
             */
            if (s_cache.GetLength() > cchMaxCacheThreshold)
            {
                s_cache.Empty();
            }
        }

        operator const StringType&() const
        {
            return (s_cache);
        }

    private:
        static const size_t cchMaxCacheThreshold = 64;
        static StringType s_cache;
    };
};

typedef CPooledStringT<CStringW> CPooledStringW;
typedef CPooledStringT<CStringA> CPooledStringA;
typedef CPooledStringT<CString>  CPooledString;

DEFINE_STATIC_LOCK_HEADER(CPooledStringW, RecursiveMutex, s_poolLock);
DEFINE_STATIC_LOCK_HEADER(CPooledStringA, RecursiveMutex, s_poolLock);
// NOTE: CPooledString will either be CPooledStringT<CStringW> or CPooledStringT<CStringA>
// depending on compilation flags, so no need to declare the static lock again.

#ifdef _MANAGED
#define POOLEDSTRINGDECL __declspec(selectany) __declspec(process)
#else
#define POOLEDSTRINGDECL __declspec(selectany)
#endif

/*
 * Profiling indicated that we spent a lot of time in Lookup searching for
 * empty strings.  We can avoid this by pointing empty CPooledStrings at the
 * static s_emptyStringPair member rather than pooling them.  We initialize it
 * with a refcount of one (not zero) so that we'll never try to remove it from
 * the pool (which would fail), as we would if its refcount reached zero.
 */
#define DECLARE_POOLEDSTRING_STATICS(PooledStringType)  \
    POOLEDSTRINGDECL PooledStringType::PoolType             PooledStringType::s_pool; \
    POOLEDSTRINGDECL PooledStringType::StringType           PooledStringType::CCachedInitString::s_cache; \
    POOLEDSTRINGDECL PooledStringType::PairType             PooledStringType::s_emptyStringPair(PooledStringType::StringType(), 1);    

DECLARE_POOLEDSTRING_STATICS (CPooledStringW);
DECLARE_POOLEDSTRING_STATICS (CPooledStringA);

_STDEXT_BEGIN

/*
 * define overloads of stdext::hash_value(CPooledString) so CPooledStrings can be 
 * key values in hashed collections (stdext::hash_map, stdext::hash_set, etc.)
 */
template<class StringType>
inline size_t hash_value(const CPooledStringT<StringType>& s)
{   
    return (CStringHash() (s.GetStringObject()));
}

_STDEXT_END

#endif
