#pragma once

#include "Functions.h"
#include "Login.h"
#include "MainWindow.h"
#include "stdafx.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace ПрограммаучетакарточекВКПУ 
{

	public ref class LoginWindow : public System::Windows::Forms::Form
	{
	public:
		LoginWindow()
		{
			InitializeComponent();
		}
	public:
		LoginWindow(MainWindow^ MW)
		{
			InitializeComponent();
			mainForm = MW;
		}
	protected:
		~LoginWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  UserLabel;

	private: System::Windows::Forms::Label^  Name;
	private: System::Windows::Forms::Label^  Password;
	public: System::Windows::Forms::TextBox^  EnterPassword;

	private: System::Windows::Forms::Button^  LoginWindowOkButton;
	public: System::Windows::Forms::TextBox^  EnterName;

	private: System::ComponentModel::Container ^components;
	private: MainWindow^ mainForm;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginWindow::typeid));
			this->UserLabel = (gcnew System::Windows::Forms::Label());
			this->Name = (gcnew System::Windows::Forms::Label());
			this->Password = (gcnew System::Windows::Forms::Label());
			this->EnterPassword = (gcnew System::Windows::Forms::TextBox());
			this->LoginWindowOkButton = (gcnew System::Windows::Forms::Button());
			this->EnterName = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// UserLabel
			// 
			this->UserLabel->AutoSize = true;
			this->UserLabel->Location = System::Drawing::Point(79, 9);
			this->UserLabel->Name = L"UserLabel";
			this->UserLabel->Size = System::Drawing::Size(80, 13);
			this->UserLabel->TabIndex = 0;
			this->UserLabel->Text = L"Пользователь";
			// 
			// Name
			// 
			this->Name->AutoSize = true;
			this->Name->Location = System::Drawing::Point(15, 32);
			this->Name->Name = L"Name";
			this->Name->Size = System::Drawing::Size(32, 13);
			this->Name->TabIndex = 2;
			this->Name->Text = L"Имя:";
			// 
			// Password
			// 
			this->Password->AutoSize = true;
			this->Password->Location = System::Drawing::Point(15, 77);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(45, 13);
			this->Password->TabIndex = 3;
			this->Password->Text = L"Пароль";
			// 
			// EnterPassword
			// 
			this->EnterPassword->Location = System::Drawing::Point(12, 93);
			this->EnterPassword->Name = L"EnterPassword";
			this->EnterPassword->PasswordChar = '*';
			this->EnterPassword->Size = System::Drawing::Size(104, 20);
			this->EnterPassword->TabIndex = 5;
			// 
			// LoginWindowOkButton
			// 
			this->LoginWindowOkButton->Location = System::Drawing::Point(82, 125);
			this->LoginWindowOkButton->Name = L"LoginWindowOkButton";
			this->LoginWindowOkButton->Size = System::Drawing::Size(75, 23);
			this->LoginWindowOkButton->TabIndex = 6;
			this->LoginWindowOkButton->Text = L"Ок";
			this->LoginWindowOkButton->UseVisualStyleBackColor = true;
			this->LoginWindowOkButton->Click += gcnew System::EventHandler(this, &LoginWindow::LoginWindowOkButton_Click);
			// 
			// EnterName
			// 
			this->EnterName->Location = System::Drawing::Point(12, 49);
			this->EnterName->Name = L"EnterName";
			this->EnterName->Size = System::Drawing::Size(104, 20);
			this->EnterName->TabIndex = 4;
			// 
			// LoginWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(240, 160);
			this->Controls->Add(this->EnterName);
			this->Controls->Add(this->LoginWindowOkButton);
			this->Controls->Add(this->EnterPassword);
			this->Controls->Add(this->Name);
			this->Controls->Add(this->Password);
			this->Controls->Add(this->UserLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Учёт карточек ВКПУ";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &LoginWindow::LoginWindow_Load);
			this->Closing += gcnew System::ComponentModel::CancelEventHandler(this, &LoginWindow::LoginWindow_Closing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LoginWindow_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
			 }
	private: System::Void LoginWindowOkButton_Click(System::Object^  sender, System::EventArgs^  e); 
	private: System::Void LoginWindow_Closing( Object^ sender, System::ComponentModel::CancelEventArgs^ e);
	};
}

