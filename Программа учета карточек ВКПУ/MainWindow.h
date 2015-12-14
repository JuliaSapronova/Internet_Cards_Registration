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


namespace �������������������������� {

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
	public: System::Windows::Forms::ToolStripMenuItem^  ����������ToolStripMenuItem2;
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
	public: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  �����������������ToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  ������������ToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  �������������ToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  �������������ToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  ���������ToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  ��������������������ToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  �������������������ToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  ����������ToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  �����������������ToolStripMenuItem;
	protected: 

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->����ToolStripMenuItem, 
				this->����ToolStripMenuItem, this->�����ToolStripMenuItem, this->���������ToolStripMenuItem, this->����������ToolStripMenuItem2});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(350, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";

			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->�����������������ToolStripMenuItem, 
				this->������������ToolStripMenuItem, this->�����ToolStripMenuItem});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �����������������ToolStripMenuItem
			// 
			this->�����������������ToolStripMenuItem->Name = L"�����������������ToolStripMenuItem";
			this->�����������������ToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->�����������������ToolStripMenuItem->Text = L"����� ������������";
			this->�����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::�����������������ToolStripMenuItem_Click);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->������������ToolStripMenuItem->Text = L"�������� ����";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::������������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::�����ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->����ToolStripMenuItem, 
				this->�������������ToolStripMenuItem, this->�������������ToolStripMenuItem});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->����ToolStripMenuItem->Text = L"������";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::����ToolStripMenuItem_Click);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->�������������ToolStripMenuItem->Text = L"������ �� �����";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::�������������ToolStripMenuItem_Click);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->�������������ToolStripMenuItem->Text = L"������� � �����";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::�������������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->�����������������ToolStripMenuItem});
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(51, 20);
			this->�����ToolStripMenuItem->Text = L"�����";
			// 
			// �����������������ToolStripMenuItem
			// 
			this->�����������������ToolStripMenuItem->Name = L"�����������������ToolStripMenuItem";
			this->�����������������ToolStripMenuItem->Size = System::Drawing::Size(191, 22);
			this->�����������������ToolStripMenuItem->Text = L"������������ �����";
			this->�����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::�����������������ToolStripMenuItem_Click);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->��������������������ToolStripMenuItem, 
				this->�������������������ToolStripMenuItem, this->����������ToolStripMenuItem});
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->���������ToolStripMenuItem->Text = L"���������";
			// 
			// ��������������������ToolStripMenuItem
			// 
			this->��������������������ToolStripMenuItem->Name = L"��������������������ToolStripMenuItem";
			this->��������������������ToolStripMenuItem->Size = System::Drawing::Size(204, 22);
			this->��������������������ToolStripMenuItem->Text = L"�������� ������������";
			this->��������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::��������������������ToolStripMenuItem_Click);
			// 
			// �������������������ToolStripMenuItem
			// 
			this->�������������������ToolStripMenuItem->Name = L"�������������������ToolStripMenuItem";
			this->�������������������ToolStripMenuItem->Size = System::Drawing::Size(204, 22);
			this->�������������������ToolStripMenuItem->Text = L"������� ������������";
			this->�������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::�������������������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(204, 22);
			this->����������ToolStripMenuItem->Text = L"�������� ������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::����������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem2
			// 
			this->����������ToolStripMenuItem2->Name = L"����������ToolStripMenuItem2";
			this->����������ToolStripMenuItem2->Size = System::Drawing::Size(94, 20);
			this->����������ToolStripMenuItem2->Text = L"� ���������";
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
			this->label1->Text = L"������������:";
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
			this->label3->Text = L"�������� ��������-����:";
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
			this->label5->Text = L"������ �� �������:";
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
			this->label6->Text = L"�������:";
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
			this->label8->Text = L"����������:";
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
			this->button1->Text = L"��������";
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
			this->Text = L"���� �������� ����";
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			this->Closing += gcnew System::ComponentModel::CancelEventHandler(this, &MainWindow::MainWindow_Closing);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();


		}
#pragma endregion
	private: System::Void ��������������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 AddUser^ AU = gcnew AddUser(USER);
				 AU->Show();
			 }
	private: System::Void �������������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 DeleteUser^ DU = gcnew DeleteUser(USER);
				 DU->Show();
			 }
	private: System::Void ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void �����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 if( MessageBox::Show("����� �� ���������?", "����������", MessageBoxButtons::YesNo) == ::DialogResult::Yes)
					 this->Close();
			 }
	private: System::Void �����������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void �������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 string str = SystemToSTDString(openFileDialog1->FileName);
					 InputInfo I;
					 if(!(I.importData(str.c_str())))
						 MessageBox::Show("����� ������ ��� ����������!");
					 else
						 MessageBox::Show("������ ���������!");
				 }
			 }
	private: System::Void �����������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void MainWindow_Load(System::Object^  sender, System::EventArgs^  e) ;
	private: System::Void MainWindow_Closing( Object^ sender, System::ComponentModel::CancelEventArgs^ e)
			 {
				 writeToLog(SystemToSTDString(USER), LOGOUT);
			 }	
	private: System::Void ����������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 ChangePassword^ CP = gcnew ChangePassword(USER);
				 CP->Show();
			 }
	private: System::Void �������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 ExportData^ ED = gcnew ExportData(USER);
				 ED->Show();
			 }
	private: System::Void ������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
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

