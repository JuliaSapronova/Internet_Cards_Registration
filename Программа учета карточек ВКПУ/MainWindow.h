#pragma once
#include "Functions.h"
#include "Login.h"
#include "stdafx.h"
#include "AddUser.h"
#include "DeleteUser.h"
#include "DataFile.h"
#include "ChangePassword.h"
#include "ExportData.h"
#include "InputInfo.h"
#include "OutputInfo.h"
#include "LogView.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Ïðîãðàììàó÷åòàêàðòî÷åêÂÊÏÓ {

	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow()
		{
			InitializeComponent();
		}
	public: String^ USER;
	public: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	public: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::Label^  label4;
	public: System::Windows::Forms::Label^  label5;
	public: System::Windows::Forms::Label^  label6;
	public: System::Windows::Forms::Label^  label7;
	public: System::Windows::Forms::Label^  label8;

	public: System::Windows::Forms::ListBox^  listBox1;
	public: System::Windows::Forms::ListBox^  listBox2;
	public: System::Windows::Forms::ToolStripMenuItem^  îÏðîãðàììåToolStripMenuItem2;
	public: System::Windows::Forms::Button^  button1;
	protected:
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	public: System::Windows::Forms::ToolStripMenuItem^  ìåíþToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  ñìåíàÏîëüçîâàòåëÿToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  ïðîñìîòðËîãàToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  âûõîäToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  ôàéëToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  ââîäToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  èìïîðòÈçÔàéëàToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  ýêñïîðòÂÀðõèâToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  îò÷åòToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  íàñòðîéêèToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  äîáàâèòüÏîëüçîâàòåëÿToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  óäàëèòüÏîëüçîâàòåëÿToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  îÏðîãðàììåToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  ñôîðìèðîâàòüÎò÷åòToolStripMenuItem;
	protected: 

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ìåíþToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñìåíàÏîëüçîâàòåëÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïðîñìîòðËîãàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ââîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èìïîðòÈçÔàéëàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ýêñïîðòÂÀðõèâToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îò÷åòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñôîðìèðîâàòüÎò÷åòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàñòðîéêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîáàâèòüÏîëüçîâàòåëÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->óäàëèòüÏîëüçîâàòåëÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏðîãðàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏðîãðàììåToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->ìåíþToolStripMenuItem, 
				this->ôàéëToolStripMenuItem, this->îò÷åòToolStripMenuItem, this->íàñòðîéêèToolStripMenuItem, this->îÏðîãðàììåToolStripMenuItem2});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(350, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";

			// 
			// ìåíþToolStripMenuItem
			// 
			this->ìåíþToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->ñìåíàÏîëüçîâàòåëÿToolStripMenuItem, 
				this->ïðîñìîòðËîãàToolStripMenuItem, this->âûõîäToolStripMenuItem});
			this->ìåíþToolStripMenuItem->Name = L"ìåíþToolStripMenuItem";
			this->ìåíþToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->ìåíþToolStripMenuItem->Text = L"Ìåíþ";
			// 
			// ñìåíàÏîëüçîâàòåëÿToolStripMenuItem
			// 
			this->ñìåíàÏîëüçîâàòåëÿToolStripMenuItem->Name = L"ñìåíàÏîëüçîâàòåëÿToolStripMenuItem";
			this->ñìåíàÏîëüçîâàòåëÿToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->ñìåíàÏîëüçîâàòåëÿToolStripMenuItem->Text = L"Ñìåíà ïîëüçîâàòåëÿ";
			this->ñìåíàÏîëüçîâàòåëÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::ñìåíàÏîëüçîâàòåëÿToolStripMenuItem_Click);
			// 
			// ïðîñìîòðËîãàToolStripMenuItem
			// 
			this->ïðîñìîòðËîãàToolStripMenuItem->Name = L"ïðîñìîòðËîãàToolStripMenuItem";
			this->ïðîñìîòðËîãàToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->ïðîñìîòðËîãàToolStripMenuItem->Text = L"Ïðîñìîòð ëîãà";
			this->ïðîñìîòðËîãàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::ïðîñìîòðËîãàToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::âûõîäToolStripMenuItem_Click);
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->ââîäToolStripMenuItem, 
				this->èìïîðòÈçÔàéëàToolStripMenuItem, this->ýêñïîðòÂÀðõèâToolStripMenuItem});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->ôàéëToolStripMenuItem->Text = L"Äàííûå";
			// 
			// ââîäToolStripMenuItem
			// 
			this->ââîäToolStripMenuItem->Name = L"ââîäToolStripMenuItem";
			this->ââîäToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->ââîäToolStripMenuItem->Text = L"Ââîä";
			this->ââîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::ââîäToolStripMenuItem_Click);
			// 
			// èìïîðòÈçÔàéëàToolStripMenuItem
			// 
			this->èìïîðòÈçÔàéëàToolStripMenuItem->Name = L"èìïîðòÈçÔàéëàToolStripMenuItem";
			this->èìïîðòÈçÔàéëàToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->èìïîðòÈçÔàéëàToolStripMenuItem->Text = L"Èìïîðò èç ôàéëà";
			this->èìïîðòÈçÔàéëàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::èìïîðòÈçÔàéëàToolStripMenuItem_Click);
			// 
			// ýêñïîðòÂÀðõèâToolStripMenuItem
			// 
			this->ýêñïîðòÂÀðõèâToolStripMenuItem->Name = L"ýêñïîðòÂÀðõèâToolStripMenuItem";
			this->ýêñïîðòÂÀðõèâToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->ýêñïîðòÂÀðõèâToolStripMenuItem->Text = L"Ýêñïîðò â àðõèâ";
			this->ýêñïîðòÂÀðõèâToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::ýêñïîðòÂÀðõèâToolStripMenuItem_Click);
			// 
			// îò÷åòToolStripMenuItem
			// 
			this->îò÷åòToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->ñôîðìèðîâàòüÎò÷åòToolStripMenuItem});
			this->îò÷åòToolStripMenuItem->Name = L"îò÷åòToolStripMenuItem";
			this->îò÷åòToolStripMenuItem->Size = System::Drawing::Size(51, 20);
			this->îò÷åòToolStripMenuItem->Text = L"Îò÷åò";
			// 
			// ñôîðìèðîâàòüÎò÷åòToolStripMenuItem
			// 
			this->ñôîðìèðîâàòüÎò÷åòToolStripMenuItem->Name = L"ñôîðìèðîâàòüÎò÷åòToolStripMenuItem";
			this->ñôîðìèðîâàòüÎò÷åòToolStripMenuItem->Size = System::Drawing::Size(191, 22);
			this->ñôîðìèðîâàòüÎò÷åòToolStripMenuItem->Text = L"Ñôîðìèðîâàòü îò÷åò";
			this->ñôîðìèðîâàòüÎò÷åòToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::ñôîðìèðîâàòüÎò÷åòToolStripMenuItem_Click);
			// 
			// íàñòðîéêèToolStripMenuItem
			// 
			this->íàñòðîéêèToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->äîáàâèòüÏîëüçîâàòåëÿToolStripMenuItem, 
				this->óäàëèòüÏîëüçîâàòåëÿToolStripMenuItem, this->îÏðîãðàììåToolStripMenuItem});
			this->íàñòðîéêèToolStripMenuItem->Name = L"íàñòðîéêèToolStripMenuItem";
			this->íàñòðîéêèToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->íàñòðîéêèToolStripMenuItem->Text = L"Íàñòðîéêè";
			// 
			// äîáàâèòüÏîëüçîâàòåëÿToolStripMenuItem
			// 
			this->äîáàâèòüÏîëüçîâàòåëÿToolStripMenuItem->Name = L"äîáàâèòüÏîëüçîâàòåëÿToolStripMenuItem";
			this->äîáàâèòüÏîëüçîâàòåëÿToolStripMenuItem->Size = System::Drawing::Size(204, 22);
			this->äîáàâèòüÏîëüçîâàòåëÿToolStripMenuItem->Text = L"Äîáàâèòü ïîëüçîâàòåëÿ";
			this->äîáàâèòüÏîëüçîâàòåëÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::äîáàâèòüÏîëüçîâàòåëÿToolStripMenuItem_Click);
			// 
			// óäàëèòüÏîëüçîâàòåëÿToolStripMenuItem
			// 
			this->óäàëèòüÏîëüçîâàòåëÿToolStripMenuItem->Name = L"óäàëèòüÏîëüçîâàòåëÿToolStripMenuItem";
			this->óäàëèòüÏîëüçîâàòåëÿToolStripMenuItem->Size = System::Drawing::Size(204, 22);
			this->óäàëèòüÏîëüçîâàòåëÿToolStripMenuItem->Text = L"Óäàëèòü ïîëüçîâàòåëÿ";
			this->óäàëèòüÏîëüçîâàòåëÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::óäàëèòüÏîëüçîâàòåëÿToolStripMenuItem_Click);
			// 
			// îÏðîãðàììåToolStripMenuItem
			// 
			this->îÏðîãðàììåToolStripMenuItem->Name = L"îÏðîãðàììåToolStripMenuItem";
			this->îÏðîãðàììåToolStripMenuItem->Size = System::Drawing::Size(204, 22);
			this->îÏðîãðàììåToolStripMenuItem->Text = L"Èçìåíèòü ïàðîëü";
			this->îÏðîãðàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::îÏðîãðàììåToolStripMenuItem_Click);
			// 
			// îÏðîãðàììåToolStripMenuItem2
			// 
			this->îÏðîãðàììåToolStripMenuItem2->Name = L"îÏðîãðàììåToolStripMenuItem2";
			this->îÏðîãðàììåToolStripMenuItem2->Size = System::Drawing::Size(94, 20);
			this->îÏðîãðàììåToolStripMenuItem2->Text = L"Î ïðîãðàììå";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->DefaultExt = L"txt";
			this->openFileDialog1->FileName = L".txt";
			this->openFileDialog1->Filter = L"files|*.txt";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ïîëüçîâàòåëü:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(114, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 55);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(160, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Äîñòóïíî Èíòåðíåò-Êàðò:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(178, 55);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 80);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(126, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Âûäàíî çà ñåãîäíÿ:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 105);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Íîìèíàë:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(137, 80);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->CausesValidation = false;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(91, 105);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Êîëè÷åñòâî:";
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::Control;
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->listBox1->Location = System::Drawing::Point(15, 121);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(53, 117);
			this->listBox1->TabIndex = 9;
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::SystemColors::Control;
			this->listBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox2->Location = System::Drawing::Point(94, 121);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(66, 117);
			this->listBox2->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(263, 219);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Îáíîâèòü";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			// 
			// MainWindow
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(350, 254);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MainWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ó÷åò êàðòî÷åê ÂÊÏÓ";
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			this->Closing += gcnew System::ComponentModel::CancelEventHandler(this, &MainWindow::MainWindow_Closing);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();


		}
#pragma endregion
	private: System::Void äîáàâèòüÏîëüçîâàòåëÿToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 AddUser^ AU = gcnew AddUser(USER);
				 AU->Show();
			 }
	private: System::Void óäàëèòüÏîëüçîâàòåëÿToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 DeleteUser^ DU = gcnew DeleteUser(USER);
				 DU->Show();
			 }
	private: System::Void ââîäToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void âûõîäToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 if( MessageBox::Show("Âûéòè èç ïðîãðàììû?", "Èíôîðìàöèÿ", MessageBoxButtons::YesNo) == ::DialogResult::Yes)
					 this->Close();
			 }
	private: System::Void ñìåíàÏîëüçîâàòåëÿToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void èìïîðòÈçÔàéëàToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 string str = SystemToSTDString(openFileDialog1->FileName);
					 InputInfo I;
					 if(!(I.importData(str.c_str())))
						 MessageBox::Show("Òàêèå äàííûå óæå ñóùåñòâóþò!");
					 else
						 MessageBox::Show("Äàííûå äîáàâëåíû!");
				 }
			 }
	private: System::Void ñôîðìèðîâàòüÎò÷åòToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void MainWindow_Load(System::Object^  sender, System::EventArgs^  e) ;
	private: System::Void MainWindow_Closing( Object^ sender, System::ComponentModel::CancelEventArgs^ e)
			 {
				 writeToLog(SystemToSTDString(USER), LOGOUT);
			 }	
	private: System::Void îÏðîãðàììåToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 ChangePassword^ CP = gcnew ChangePassword(USER);
				 CP->Show();
			 }
	private: System::Void ýêñïîðòÂÀðõèâToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 ExportData^ ED = gcnew ExportData(USER);
				 ED->Show();
			 }
	private: System::Void ïðîñìîòðËîãàToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 LogView^ LW = gcnew LogView();
				 LW->Show();
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 label2->Text = USER;
				 listBox1->Items->Clear();
				 listBox2->Items->Clear();
				 DataFile D;
				 label4->Text = D.getAll().ToString();
				 OutputInfo O;
				 O.dayReport("File.txt");
				 ifstream IS(REPORT);
				 int i = 1;
				 char c[100];
				 IS >> c;
				 int given = 0;
				 while(!(IS.eof()))
				 {

					 IS >> c;
					 listBox1->Items->Add(gcnew String(c));
					 IS >> c;
					 given += atoi(c);
					 listBox2->Items->Add(gcnew String(c));
				 }
				 label7->Text = given.ToString();
			 }
	};
}

