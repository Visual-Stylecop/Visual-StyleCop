using System;
using System.Collections.Generic;

namespace StringFormatCSharp6
{
    public class Class1
    {
        public const string test = "test";
        public string string1 = string.Format("string format");
        string string2 = $"string interpolation {test}";

        public void Method1(string item)
        {
            string1 = string.Format("string format {0}", string1);
            string2 = $"string interpolation {string2}";
        }

        public void Method2()
        {
            Method1(string.Format("string format {0}", string1));
            Method1($"string interpolation {string2}");
        }
    }

    public class ConstVariables
    {
        public const string test = "test";
        private readonly string x = string.Format("string format {0}", test);
        private readonly string y = $"string interpolation {test}";
    }
}
