#pragma once
#include "DataFile.h"
#include "MainWindow.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ПрограммаучетакарточекВКПУ {

	public ref class GiveCard : public System::Windows::Forms::Form
	{
	public:
		GiveCard(void)
		{
			InitializeComponent();
		}
		GiveCard(String^ name, MainWindow^ MW)
		{
			InitializeComponent();
			USER = name;
			mainForm = MW;
		}
	private: MainWindow^ mainForm;
	private: String^ USER;
	protected:
		~GiveCard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GiveCard::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(210, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Количество оставшихся Интернет-Карт:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(225, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 47);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(141, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Выберите номинал карты:";
			// 
			// comboBox1
			// 
			this->comboBox1->Location = System::Drawing::Point(12, 72);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(138, 21);
			this->comboBox1->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 113);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Номер комнаты:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 143);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(138, 20);
			this->textBox1->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(312, 186);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Выдать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GiveCard::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 186);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GiveCard::button2_Click);
			// 
			// GiveCard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(399, 232);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"GiveCard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Выдать карту:";
			this->Closing += gcnew System::ComponentModel::CancelEventHandler(this, &GiveCard::GiveCard_Closing);
			this->Load += gcnew System::EventHandler(this, &GiveCard::GiveCard_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GiveCard_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 DataFile D;
				 label2->Text = D.getAll().ToString();
				 string* Nom = D.getNominals();
				 for(int i = 0; i < D.getDifNominals(); i ++)
				 {

					 comboBox1->Items->Add(gcnew String(Nom[i].c_str()));
				 }

			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 this->Close();				
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e); 
	private: System::Void GiveCard_Closing( Object^ sender, System::ComponentModel::CancelEventArgs^ e)
			 {
				 mainForm->label2->Text = USER;
				 mainForm->listBox1->Items->Clear();
				 mainForm->listBox2->Items->Clear();
				 DataFile D;
				 mainForm->label4->Text = D.getAll().ToString();
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
					 mainForm->listBox1->Items->Add(gcnew String(c));
					 IS >> c;
					 given += atoi(c);
					 mainForm->listBox2->Items->Add(gcnew String(c));
				 }
				 mainForm->label7->Text = given.ToString();
			 }
	};
}
