#include "MyForm.h"
#include <stdio.h>  // for printf
#include "Server_select.h"
//#include <SQLAPI.h> // main SQLAPI++ header

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Project1::Server_select Server_select;
	Application::Run(%form);
	return 0;
}