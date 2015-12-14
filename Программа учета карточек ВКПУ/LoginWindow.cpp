#include "stdafx.h"
#include "LoginWindow.h"
#include "MainWindow.h"

namespace Ïðîãðàììàó÷åòàêàðòî÷åêÂÊÏÓ 
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
			MessageBox::Show("Äîñòóï ðàçðåøåí", "Äîñòóï");
			mainForm->USER = gcnew String(Info.findName(username).c_str());
			if(Info.getAccessRights(username))
			{
				mainForm->ôàéëToolStripMenuItem->Enabled = true;
				mainForm->íàñòðîéêèToolStripMenuItem->Enabled = true;
				mainForm->îò÷åòToolStripMenuItem->Enabled = true;
				mainForm->ïðîñìîòðËîãàToolStripMenuItem->Enabled = true;
				mainForm->button1->Enabled = true;
				this->Close();

			}
			else
			{
				mainForm->ôàéëToolStripMenuItem->Enabled = true;
				mainForm->îò÷åòToolStripMenuItem->Enabled = true;
				mainForm->ýêñïîðòÂÀðõèâToolStripMenuItem->Enabled = false;
				mainForm->èìïîðòÈçÔàéëàToolStripMenuItem->Enabled = false;
				mainForm->button1->Enabled = true;
				this->Close();
			}


		}
		else
		{
			EnterName->Clear();
			EnterPassword->Clear();
			MessageBox::Show("Ïîëüçîâàòåëÿ ñ òàêèì èìåíåì è ïàðîëåì íå ñóùåñòâóåò!", "Äîñòóï");
		}
	}
	System::Void LoginWindow::LoginWindow_Closing( Object^ sender, System::ComponentModel::CancelEventArgs^ e)
	{
		mainForm->Show();
	}
}