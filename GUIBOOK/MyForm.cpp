#include "MyForm.h"

#include <stdio.h>		// for printf
#include "Server_select.h"		//for other window
#include "Register_ID.h"		//for other window
#include "Ruleofuse.h"			//for other window

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
int main()//array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	GUIBOOK::MyForm form;
	Application::Run(%form);
	//GUIBOOK::Server_select form;
	//Application::Run(%form);
	return 0;
}

