﻿// --------------------------------------------------------------------------------------------------------------------
// <copyright file="MockTaskEnum.cs" company="http://stylecop.codeplex.com">
//   MS-PL
// </copyright>
// <license>
//   This source code is subject to terms and conditions of the Microsoft
//   Public License. A copy of the license can be found in the License.html
//   file at the root of this distribution. If you cannot locate the
//   Microsoft Public License, please send an email to dlr@microsoft.com.
//   By using this source code in any fashion, you are agreeing to be bound
//   by the terms of the Microsoft Public License. You must not remove this
//   notice, or any other, from this software.
// </license>
// <summary>
//   The mock task enum.
// </summary>
// --------------------------------------------------------------------------------------------------------------------

namespace VSPackageUnitTest.Mocks
{
    using System;
    using System.Collections.Generic;

    using Microsoft.VisualStudio;
    using Microsoft.VisualStudio.Shell.Interop;

    /// <summary>
    /// The mock task enum.
    /// </summary>
    internal class MockTaskEnum : IVsEnumTaskItems
    {
        private readonly IList<IVsTaskItem> items;

        private int next = 0;

        /// <summary>
        /// Initializes a new instance of the <see cref="MockTaskEnum"/> class.
        /// </summary>
        /// <param name="items">
        /// The items.
        /// </param>
        public MockTaskEnum(IList<IVsTaskItem> items)
        {
            this.items = items;
        }

        /// <summary>
        /// The clone.
        /// </summary>
        /// <param name="ppenum">
        /// The ppenum.
        /// </param>
        /// <returns>
        /// The clone.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int Clone(out IVsEnumTaskItems ppenum)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// The next.
        /// </summary>
        /// <param name="celt">
        /// The celt.
        /// </param>
        /// <param name="rgelt">
        /// The rgelt.
        /// </param>
        /// <param name="pceltFetched">
        /// The pcelt fetched.
        /// </param>
        /// <returns>
        /// The next.
        /// </returns>
        public int Next(uint celt, IVsTaskItem[] rgelt, uint[] pceltFetched)
        {
            for (pceltFetched[0] = 0; celt > 0; --celt, ++pceltFetched[0])
            {
                if (this.next >= this.items.Count)
                {
                    return VSConstants.S_FALSE;
                }

                rgelt[pceltFetched[0]] = this.items[this.next++];
            }

            return VSConstants.S_OK;
        }

        /// <summary>
        /// The reset.
        /// </summary>
        /// <returns>
        /// The reset.
        /// </returns>
        public int Reset()
        {
            this.next = 0;
            return VSConstants.S_OK;
        }

        /// <summary>
        /// The skip.
        /// </summary>
        /// <param name="celt">
        /// The celt.
        /// </param>
        /// <returns>
        /// The skip.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int Skip(uint celt)
        {
            throw new NotImplementedException();
        }
    }
}