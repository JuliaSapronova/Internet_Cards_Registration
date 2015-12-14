#include "stdafx.h"
#include "LoginWindow.h"
#include "MainWindow.h"

namespace �������������������������� 
{
	System::Void LoginWindow::LoginWindowOkButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		System::String^ UN = EnterName->Text;
		std::string username = SystemToSTDString(UN);
		System::String^ PW = EnterPassword->Text;
		std::string password = SystemToSTDString(PW);
		CLogin Info;

		if(Info.checkAccess(username, password))
		{
			writeToLog(username, LOGIN);
			MessageBox::Show("������ ��������", "������");
			mainForm->USER = gcnew String(Info.findName(username).c_str());
			if(Info.getAccessRights(username))
			{
				mainForm->����ToolStripMenuItem->Enabled = true;
				mainForm->���������ToolStripMenuItem->Enabled = true;
				mainForm->�����ToolStripMenuItem->Enabled = true;
				mainForm->������������ToolStripMenuItem->Enabled = true;
				mainForm->button1->Enabled = true;
				this->Close();

			}
			else
			{
				mainForm->����ToolStripMenuItem->Enabled = true;
				mainForm->�����ToolStripMenuItem->Enabled = true;
				mainForm->�������������ToolStripMenuItem->Enabled = false;
				mainForm->�������������ToolStripMenuItem->Enabled = false;
				mainForm->button1->Enabled = true;
				this->Close();
			}


		}
		else
		{
			EnterName->Clear();
			EnterPassword->Clear();
			MessageBox::Show("������������ � ����� ������ � ������� �� ����������!", "������");
		}
	}
	System::Void LoginWindow::LoginWindow_Closing( Object^ sender, System::ComponentModel::CancelEventArgs^ e)
	{
		mainForm->Show();
	}
}