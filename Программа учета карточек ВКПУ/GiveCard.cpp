#pragma once
#include "stdafx.h"
#include "GiveCard.h"
#include "AcceptGiveCard.h"

namespace ПрограммаучетакарточекВКПУ 
{
	System::Void GiveCard::button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		DataFile D;
		string* Nom = D.getNominals();
		bool right = false;
		for(int i = 0; i < D.getDifNominals(); i ++)
		{
			if(SystemToSTDString(comboBox1->Text) == Nom[i])
				right = true;
		}
		if(right)
		{
			if(SystemToSTDString(textBox1->Text)=="\0")
			{
				MessageBox::Show("Введите номер комнаты!");
			}
			else
			{
				AcceptGiveCard^ AGC = gcnew AcceptGiveCard(USER, comboBox1->Text, textBox1->Text, this);
				AGC->Show();
			}
		}
		else
		{
			MessageBox::Show("Выберите номинал из списка!");
		}
	}
}