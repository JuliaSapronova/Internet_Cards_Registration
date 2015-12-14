#pragma once
#include "OutputInfo.h"
#include "stdafx.h"
#include "Functions.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ПрограммаучетакарточекВКПУ {

	public ref class ExportData : public System::Windows::Forms::Form
	{
	public:
		ExportData(void)
		{
			InitializeComponent();
		}
		ExportData(String^ name)
		{
			InitializeComponent(); 
			USER = name;
		}
	private: String^ USER;

	protected:
		~ExportData()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ExportData::typeid));
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->SuspendLayout();
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(33, 37);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(126, 20);
			this->dateTimePicker1->TabIndex = 0;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &ExportData::dateTimePicker1_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Экспортировать данные за период:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"С";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(166, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"по";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(191, 36);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(126, 20);
			this->dateTimePicker2->TabIndex = 4;
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &ExportData::dateTimePicker2_ValueChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 74);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Сохранить в...";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 90);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(220, 20);
			this->textBox1->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(242, 87);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(27, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"...";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ExportData::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(242, 128);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Экспорт";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ExportData::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 128);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Отмена";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ExportData::button3_Click);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"files|*.txt";
			// 
			// ExportData
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(329, 163);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"ExportData";
			this->Text = L"Экспорт данных";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 dateTimePicker2->MinDate = dateTimePicker1->Value ;
			 }
	private: System::Void dateTimePicker2_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 dateTimePicker1->MaxDate = dateTimePicker2->Value ;
			 }

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if ( saveFileDialog1->ShowDialog() == ::DialogResult::OK )
				 {
					 textBox1->Text = saveFileDialog1->FileName;
				 }
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 this->Close();
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 String^ date1 = dateTimePicker1->Value.Date.ToString();
				 String^ date2 = dateTimePicker2->Value.Date.ToString();
				 String^ file = saveFileDialog1->FileName;
				 OutputInfo O;
				 O.exportData(StringToChar(date1), StringToChar(date2), StringToChar(file));
				 writeToLog(SystemToSTDString(USER), EXPORT);
				this->Close();
			 }
	};
}
