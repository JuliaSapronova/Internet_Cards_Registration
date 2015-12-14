#pragma once
#include "Functions.h"
#include "Login.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ПрограммаучетакарточекВКПУ {

	public ref class DeleteUser : public System::Windows::Forms::Form
	{
	public:
		DeleteUser(void)
		{
			InitializeComponent();
		}
		DeleteUser(String^ name)
		{
			InitializeComponent(); 
			USER = name;
		}
	private: String^ USER;
	protected:
		~DeleteUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::ComboBox^  comboBox1;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DeleteUser::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Пользователь для удаления:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(197, 107);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Удалить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DeleteUser::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 107);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DeleteUser::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(13, 46);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(154, 21);
			this->comboBox1->TabIndex = 1;
			// 
			// DeleteUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 142);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"DeleteUser";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DeleteUser";
			this->Load += gcnew System::EventHandler(this, &DeleteUser::DeleteUser_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DeleteUser_Load(System::Object^  sender, System::EventArgs^  e) 
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
				 CLogin Del;
				 string name = Del.findUsername(username);
				 if(Del.deleteAccount(name))
				 {
					 std::string A = DELETEUSER;
					 A+=" ";
					 A+=SystemToSTDString(comboBox1->Text);
					 writeToLog(SystemToSTDString(USER), (A.c_str()));
					 MessageBox::Show("Пользователь успешно удален!", "Информация");
				 }
				 else
					 MessageBox::Show("Невозможно удалить пользователя!", "Информация");
				 this->Close();
			 }
	};
}
