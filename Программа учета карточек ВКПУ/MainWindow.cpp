#include "stdafx.h"
#include "MainWindow.h"
#include "LoginWindow.h"
#include "GenerateReport.h"
#include "GiveCard.h"
namespace Ïðîãðàììàó÷åòàêàðòî÷åêÂÊÏÓ
{
	System::Void MainWindow::ñôîðìèðîâàòüÎò÷åòToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		GenerateReport^ GR = gcnew GenerateReport(USER);
		GR->Show();
	}
	System::Void MainWindow::MainWindow_Load(System::Object^  sender, System::EventArgs^  e) 
	{

		this->ôàéëToolStripMenuItem->Enabled = false;
		this->íàñòðîéêèToolStripMenuItem->Enabled = false;
		this->îò÷åòToolStripMenuItem->Enabled = false;
		this->ïðîñìîòðËîãàToolStripMenuItem->Enabled = false;
		this->button1->Enabled = false;
		label2->Text = " ";
		label4->Text = " ";
		label7->Text = " ";
		LoginWindow^ LW = gcnew LoginWindow(this);
		LW->Show(); 
	}
	System::Void MainWindow::ñìåíàÏîëüçîâàòåëÿToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		writeToLog(SystemToSTDString(USER), LOGOUT);
		listBox1->Items->Clear();
		listBox2->Items->Clear();
		this->ôàéëToolStripMenuItem->Enabled = false;
		this->íàñòðîéêèToolStripMenuItem->Enabled = false;
		this->îò÷åòToolStripMenuItem->Enabled = false;
		this->ïðîñìîòðËîãàToolStripMenuItem->Enabled = false;
		this->button1->Enabled = false;
		label2->Text = " ";
		label4->Text = " ";
		label7->Text = " ";
		LoginWindow^ LW = gcnew LoginWindow(this);
		LW->Show(); 		
	}
	System::Void MainWindow::ââîäToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if(label4->Text == "0")
			MessageBox::Show("Íåò äîñòóïíûõ äëÿ âûäà÷è êàðò. Îáðàòèòåñü ê ñèñòåìíîìó àäìèíèñòðàòîðó");
		else
		{
			GiveCard^ GC = gcnew GiveCard(USER, this);
			GC->Show();
		}
	}
}