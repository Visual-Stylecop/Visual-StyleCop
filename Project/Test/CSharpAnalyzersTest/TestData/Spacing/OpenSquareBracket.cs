namespace CSharpAnalyzersTest.TestData.Spacing
{
    class OpenSquareBracket
    {
        public void Foo1()
        {
            string [] test = new string[10](); // Invalid spacing
        }
    }
}
