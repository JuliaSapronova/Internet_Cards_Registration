#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ПрограммаучетакарточекВКПУ {

	/// <summary>
	/// Summary for LogView
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class LogView : public System::Windows::Forms::Form
	{
	public:
		LogView(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LogView()
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
	private: System::Windows::Forms::Label^  label4;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LogView::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Дата:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(163, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Пользователь:";
			// 
			// label3
			// 
			this->label3->AllowDrop = true;
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(276, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Действие:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(85, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Время:";
			// 
			// LogView
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(633, 262);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"LogView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Лог";
			this->Load += gcnew System::EventHandler(this, &LogView::LogView_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LogView_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 int i = 0;
				 ifstream IS(LOG);
				 while(!IS.eof())
				 {
					 
					 i++;
					 string tmp;
					 IS >> tmp;
					 Label^ l1 = gcnew Label;
					 l1->Text = gcnew String(tmp.c_str());
					 l1->Location = System::Drawing::Point(12, 13 + 25* i);
					 l1->Size = System::Drawing::Size (70, 13);
					 this->Controls->Add(l1);
					 IS >> tmp;
					 Label^ l2 = gcnew Label;
					 l2->Text = gcnew String(tmp.c_str());
					 l2->Location = System::Drawing::Point(85, 13 + 25* i);
					 l2->Size = System::Drawing::Size (80, 13);
					 this->Controls->Add(l2);
					 IS >> tmp;
					 Label^ l3 = gcnew Label;
					 l3->Text = gcnew String(tmp.c_str());
					 l3->Location = System::Drawing::Point(163, 13 + 25* i);
					 l3->Size = System::Drawing::Size (100, 13);
					 this->Controls->Add(l3);
					 char t;
					 tmp = "";
					 while(1)
					 {
						 if(!IS.eof())
						 {
							 t = IS.get();
							 if(t!='\n')
								 tmp+=t;
							 else break;
						 }
						 else break;
					 }
					 Label^ l4 = gcnew Label;
					 l4->Text = gcnew String(tmp.c_str());
					 l4->Location = System::Drawing::Point(276, 13 + 25* i);
					 l4->Size = System::Drawing::Size (400, 13);
					 this->Controls->Add(l4);
					 
				 }
			 }
	};
}
