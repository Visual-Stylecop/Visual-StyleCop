<H2>4.7.54</H2>
    - BugFix: [#9](https://github.com/Visual-Stylecop/Visual-StyleCop/issues/9)
    - BugFix: [#10](https://github.com/Visual-Stylecop/Visual-StyleCop/issues/10)
    - BugFix: [#11](https://github.com/Visual-Stylecop/Visual-StyleCop/issues/11)

<H2>4.7.53</H2>
    - Fix missing dll for VS2013, added to vsix package
    - Add dependency to framework 4.6
    - C# 6 Support Step 2 :
        - Parse using static
        - Parse collection initializer
        - Parse expression bodied member
        - Parse exception filter (when keyword)

<H2>4.7.52</H2>
    - Right click on violation and select Show error help browse to wiki on this site
    - C# 6 Support Step 1 :
        - Support string interpolation
        - Add new rule for string interpolation rather string.Format [SA1127](https://github.com/ptittof57/Visual-StyleCop/wiki/SA1127) only for 4.6 Framework projects
        - Support null conditional operator '?.'
        - Support property initializer like string myString { get; set; } = "myValue";

<H2>4.7.51</H2>
    - Add retro compatibility with visual studio 2013
    - Fix bug with show error on help (Add chm file, for next version I'll use wiki on this site)

<H2>4.7.50</H2>
    - Migration for visual studio 2015 
