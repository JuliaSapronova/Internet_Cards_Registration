// Программа учета карточек ВКПУ.cpp : main project file.
#pragma once
#include "stdafx.h"
#include "LoginWindow.h"
#include "MainWindow.h"
#include "GiveCard.h"
#include "AcceptGiveCard.h"
#include "AddUser.h"
#include "DeleteUser.h"
#include "GenerateReport.h"
#include "Functions.h"
#include "Login.h"
#include "InputInfo.h"
#include "OutputInfo.h"
#include "Date.h"
#include "DataFile.h"

using namespace ПрограммаучетакарточекВКПУ;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	setlocale(LC_ALL,"Russian");
	CLogin L("admin", "admin" , "admin" , true);
	L.addAccount();
	ofstream OS(INPUTFILE, ios::binary|ios::app);
	OS.close();
	OS.open(OUTPUTFILE, ios::binary|ios::app);
	OS.close();
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew MainWindow());
	return 0;
}
