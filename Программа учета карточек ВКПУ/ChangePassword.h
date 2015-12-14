#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ПрограммаучетакарточекВКПУ {

	public ref class ChangePassword : public System::Windows::Forms::Form
	{
	public:
		ChangePassword(void)
		{
			InitializeComponent();
		}
		ChangePassword(String^ name)
		{
			InitializeComponent(); 
			USER = name;
		}
	private: String^ USER;

	protected:
		~ChangePassword()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	protected: 

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ChangePassword::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(12, 52);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(158, 21);
			this->comboBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(202, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Пользователь для изменения пароля:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Новый пароль:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 120);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(155, 20);
			this->textBox1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(197, 165);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Изменить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ChangePassword::button1_Click);
			// 
			// button2
			// 
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button2->Location = System::Drawing::Point(15, 164);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ChangePassword::button2_Click);
			// 
			// ChangePassword
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->button2;
			this->ClientSize = System::Drawing::Size(284, 203);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"ChangePassword";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Изменить пароль";
			this->Load += gcnew System::EventHandler(this, &ChangePassword::ChangePassword_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ChangePassword_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 ifstream IS(LOGININFO, ios::binary);
				 CLogin DelAcc;
				 while(true)
				 {
					 IS.read((char*)&DelAcc, sizeof(CLogin));
					 if(IS.eof())
						 break;
					 string username = DelAcc.getName();
					 String^ UN = gcnew String(username.c_str());
					 comboBox1->Items->Add(UN);
				 }
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 this->Close();

			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 String^ UN = comboBox1->Text;
				 string username = SystemToSTDString(UN);
				 String^ PW = textBox1->Text;
				 string newPassword = SystemToSTDString(PW);
				 CLogin ChPass;
				 if(ChPass.changePassword(username, newPassword))
				 {
					 std::string A = CHANGEPASS;
					 A+=" ";
					 A+=SystemToSTDString(comboBox1->Text);
					 writeToLog(SystemToSTDString(USER), (A.c_str()));
					 MessageBox::Show("Пароль пользователя " + UN + " был успешно изменен на " + PW, "Информация");
				 }
				 else
					 MessageBox::Show("Невозможно изменить пароль", "Информация");
				 this->Close();
			 }
	};
}
