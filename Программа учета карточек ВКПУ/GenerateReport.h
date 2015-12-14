#pragma once
#include "OutputInfo.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ПрограммаучетакарточекВКПУ {

	public ref class GenerateReport : public System::Windows::Forms::Form
	{
	public:
		GenerateReport(void)
		{
			InitializeComponent();
		}
		GenerateReport(String^ name)
		{
			InitializeComponent(); 
			USER = name;
		}
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	public: 
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button3;
	private: String^ USER;

	protected:
		~GenerateReport()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GenerateReport::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button1->Location = System::Drawing::Point(15, 235);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Отмена";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GenerateReport::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(235, 235);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Сформировать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GenerateReport::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Сформировать отчет:";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(15, 40);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(115, 17);
			this->radioButton1->TabIndex = 3;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"За текущие сутки";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(15, 63);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(119, 17);
			this->radioButton2->TabIndex = 4;
			this->radioButton2->Text = L"За текущий месяц";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(15, 86);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(77, 17);
			this->radioButton3->TabIndex = 5;
			this->radioButton3->Text = L"За период";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &GenerateReport::radioButton3_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"С ";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Enabled = false;
			this->dateTimePicker1->Location = System::Drawing::Point(35, 109);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(125, 20);
			this->dateTimePicker1->TabIndex = 7;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &GenerateReport::dateTimePicker1_ValueChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(175, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"по";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Enabled = false;
			this->dateTimePicker2->Location = System::Drawing::Point(210, 110);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(125, 20);
			this->dateTimePicker2->TabIndex = 9;
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &GenerateReport::dateTimePicker2_ValueChanged);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"files|*.txt";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 161);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Сохранить в...";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 177);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(286, 20);
			this->textBox1->TabIndex = 11;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(304, 174);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(31, 23);
			this->button3->TabIndex = 12;
			this->button3->Text = L"...";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &GenerateReport::button3_Click);
			// 
			// GenerateReport
			// 
			this->AcceptButton = this->button2;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->button1;
			this->ClientSize = System::Drawing::Size(347, 270);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"GenerateReport";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Сформировать отчет";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(radioButton3->Checked)
				 {
					 dateTimePicker1->Enabled = true;
					 dateTimePicker2->Enabled = true;
				 }
				 else
				 {
					 dateTimePicker1->Enabled = false;
					 dateTimePicker2->Enabled = false;
				 }
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 this->Close();
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 
				 if( saveFileDialog1->FileName == "")
					 MessageBox::Show("Не выбран путь сохранения файла!");
				 else
				 {
					 String^ file = saveFileDialog1->FileName;
					 if(radioButton1->Checked)
					 {
						 OutputInfo Out;
						 Out.dayReport(StringToChar(file));
						 ifstream IS(REPORT);
						 String^ Rep = "За ";
						 char C[100];
						 IS >> C;
						 Rep+= gcnew String(C);
						 Rep+= " выдано: \n\n";
						 while(!(IS.eof()))
						 {
							 Rep+= "- Интернет-Карт номиналом  ";
							 IS >> C;
							 Rep+= gcnew String(C);
							 Rep+= " минут в количестве  ";
							 IS >> C;
							 Rep+= gcnew String(C);
							 Rep+= " шт.\n";
						 }
						 MessageBox::Show(Rep, "Отчет за последние сутки");
						 writeToLog(SystemToSTDString(USER), DAYREPORT);
						 this->Close();
					 }
					 if(radioButton2->Checked)
					 {
						 OutputInfo Out;
						 Out.monthReport(StringToChar(file));
						 ifstream IS(REPORT);
						 String^ Rep = "За текущий месяц выдано: \n\n";
						 char C[100];
						 IS >> C;
						 while(!(IS.eof()))
						 {
							 Rep+= "- Интернет-Карт номиналом  ";
							 IS >> C;
							 Rep+= gcnew String(C);
							 Rep+= " минут в количестве  ";
							 IS >> C;
							 Rep+= gcnew String(C);
							 Rep+= " шт.\n";
						 }
						 MessageBox::Show(Rep, "Отчет за текущий месяц");
						 writeToLog(SystemToSTDString(USER), MONTHREPORT);
						 this->Close();
					 }
					 if(radioButton3->Checked)
					 {
						 String^ date1 = dateTimePicker1->Value.Date.ToString();
						 String^ date2 = dateTimePicker2->Value.Date.ToString();
						 OutputInfo Out;
						 Out.periodReport(StringToChar(date1), StringToChar(date2), StringToChar(file));
						 String^ Rep = "За период с ";
						 Rep+=dateTimePicker1->Value.ToShortDateString();
						 Rep+= " по ";
						 Rep+=dateTimePicker2->Value.ToShortDateString();
						 ifstream IS(REPORT);
						 char C[100];
						 while(!(IS.eof()))
						 {
							 Rep+= "\n- Интернет-Карт номиналом  ";
							 IS >> C;
							 Rep+= gcnew String(C);
							 Rep+= " минут в количестве  ";
							 IS >> C;
							 Rep+= gcnew String(C);
							 Rep+= " шт.";
						 }
						 MessageBox::Show(Rep, "Отчет за период");
						 writeToLog(SystemToSTDString(USER), PERIODREPORT);
						 this->Close();
					 }
				 }
			 }
	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 dateTimePicker2->MinDate = dateTimePicker1->Value ;
			 }
	private: System::Void dateTimePicker2_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 dateTimePicker1->MaxDate = dateTimePicker2->Value ;
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if ( saveFileDialog1->ShowDialog() == ::DialogResult::OK )
				 {
					 textBox1->Text = saveFileDialog1->FileName;
				 }
			 }
	};
}
