public class Test
{ }

public class SwitchCaseNameOfClass
{
    private void SwitchCaseNameOf()
    {
        Test test = new Test();
        string CompanyFolderModel = "test";
        Test result = null;
        string name = "test";

        switch (typeof(Test).Name)
        {
            case nameof(CompanyFolderModel):
                result = this.GetCompanyFolderModel(name) as Test;
                break;
        }
    }

    private Test GetCompanyFolderModel(object name)
    {
        throw new NotImplementedException();
    }
}