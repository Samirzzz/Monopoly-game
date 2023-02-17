#include "MyForm.h"
#include<string>


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main() {


	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Project4::MyForm myFrm;
	Application::Run(% myFrm);
}
