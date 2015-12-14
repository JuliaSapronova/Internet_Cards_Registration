#include "stdafx.h"
#pragma once

class DataFile	//����� ��� ������ ������� ���������� ��� �������������� � ����
{
private:
	int all;										//����� ���������� ��������
	int difNom;										//���������� ��������� ���������
	string* nominals;								//������ ��������� ���������
	int* numNominals;								//���������� �������� � ��������� ������� ��������	
public: 
	DataFile();
	bool exist(string);
	void giveCard(string);
	void saveChanges();
	string* getNominals();
	int getAll();
	int getDifNominals();
};