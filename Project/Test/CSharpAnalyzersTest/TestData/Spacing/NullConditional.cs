using System.Collections.Generic;
using System.Linq;

namespace CSharpAnalyzersTest.TestData.Spacing
{
    internal class NullConditional
    {
        private void Method1()
        {
            List<string> list = new List<string>();
            var method1 = list?.FirstOrDefault();
            method1 = list ?.FirstOrDefault();
            method1 = list?. FirstOrDefault();
            method1 = list ?. FirstOrDefault();
            method1 = list?.FirstOrDefault()?.FirstOrDefault()?.FirstOrDefault();
            method1 = list ?.FirstOrDefault()?.FirstOrDefault()?.FirstOrDefault();
            method1 = list?. FirstOrDefault()?.FirstOrDefault()?.FirstOrDefault();
            method1 = list ?. FirstOrDefault()?.FirstOrDefault()?.FirstOrDefault();
            method1 = list?.FirstOrDefault() ?.FirstOrDefault()?.FirstOrDefault();
            method1 = list?.FirstOrDefault()?. FirstOrDefault()?.FirstOrDefault();
            method1 = list?.FirstOrDefault() ?. FirstOrDefault()?.FirstOrDefault();
            method1 = list?.FirstOrDefault()?.FirstOrDefault() ?.FirstOrDefault();
            method1 = list?.FirstOrDefault()?.FirstOrDefault()?. FirstOrDefault();
            method1 = list?.FirstOrDefault()?.FirstOrDefault() ?. FirstOrDefault();
        }
    }
}
