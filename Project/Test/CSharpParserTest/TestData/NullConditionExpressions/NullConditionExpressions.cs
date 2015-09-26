namespace CSharpParserTest.TestData
{
    public class NullConditionExpressions
    {
        public void TestObjectNotNull()
        {
            List<string> list = new List<string>();
            var variable = list?.FirstOrDefault();
        }

        public object TestArrayNotNull1()
        {
            Module[] modules = Assembly.GetExecutingAssembly().GetModules();
            Contract.Assume(modules?.Length > 0);
            var result = modules?[0];
            return modules?[0];
        }

        public object TestArrayNotNull2()
        {
            int index = 0;
            Module[] modules = Assembly.GetExecutingAssembly().GetModules();
            Contract.Assume(modules?.Length > 0);
            var result = modules?[index];
            return modules?[index];
        }

        public void TestMethodReturnIsNotNull()
        {
            string company = AssemblyInfo.Attribute()?.Company;

            var posts = new List<string>() { "abc", "123" };
            posts.First()?.Replace('a', 'z');
        }

        public void SplitNullConditionOperator()
        {
            foo?.Bar();

            foo?
              .Bar();

            foo? // comment
              .Bar();

            foo?[index];

            foo?
              [index];

            foo? // comment
              [index];

            var list = new List<string>();
            var length = list.FirstOrDefault()?
                             .Length;
        }
    }
}
 
