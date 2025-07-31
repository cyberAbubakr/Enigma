#include "MyForm1.h"
#include "MyForm.h"

using namespace Projectk;

[STAThreadAttribute]
int main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Starts MyForm as the first form
    Application::Run(gcnew MyForm());  // Make sure MyForm is defined

    return 0;
}

bool Projectk::MyForm::userHasPermission() {
    // Replace this with the actual logic for permission checking
    return true; // Example: Always returns true
}

// When you need to open MyForm1
void MyForm::OnLoginSuccess()
{
    // Check for permission and then open MyForm1
    if (userHasPermission())
    {
        MyForm1^ form1 = gcnew MyForm1();  // Instantiate MyForm1 correctly
        form1->ShowDialog();  // Show the form
    }
    else
    {
        MessageBox::Show("You do not have permission.", "Permission Denied");
    }
}
