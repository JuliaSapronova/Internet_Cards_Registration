#include "stdafx.h"
#include "MainWindow.h"
#include "LoginWindow.h"
#include "GenerateReport.h"
#include "GiveCard.h"
namespace ��������������������������
{
	System::Void MainWindow::�����������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		GenerateReport^ GR = gcnew GenerateReport(USER);
		GR->Show();
	}
	System::Void MainWindow::MainWindow_Load(System::Object^  sender, System::EventArgs^  e) 
	{

		this->����ToolStripMenuItem->Enabled = false;
		this->���������ToolStripMenuItem->Enabled = false;
		this->�����ToolStripMenuItem->Enabled = false;
		this->������������ToolStripMenuItem->Enabled = false;
		this->button1->Enabled = false;
		label2->Text = " ";
		label4->Text = " ";
		label7->Text = " ";
		LoginWindow^ LW = gcnew LoginWindow(this);
		LW->Show(); 
	}
	System::Void MainWindow::�����������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		writeToLog(SystemToSTDString(USER), LOGOUT);
		listBox1->Items->Clear();
		listBox2->Items->Clear();
		this->����ToolStripMenuItem->Enabled = false;
		this->���������ToolStripMenuItem->Enabled = false;
		this->�����ToolStripMenuItem->Enabled = false;
		this->������������ToolStripMenuItem->Enabled = false;
		this->button1->Enabled = false;
		label2->Text = " ";
		label4->Text = " ";
		label7->Text = " ";
		LoginWindow^ LW = gcnew LoginWindow(this);
		LW->Show(); 		
	}
	System::Void MainWindow::����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if(label4->Text == "0")
			MessageBox::Show("��� ��������� ��� ������ ����. ���������� � ���������� ��������������");
		else
		{
			GiveCard^ GC = gcnew GiveCard(USER, this);
			GC->Show();
		}
	}
}