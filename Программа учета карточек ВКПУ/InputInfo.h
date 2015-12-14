#include "stdafx.h"
#pragma once
class InputInfo //����� ��� ������ � ������, ���������� ���������� � ��������� ���������
{
private:
	string number;									//����� ��������
	string login;									//�����
	string password;								//������
	string nominalvalue;							//������� ��������(� �������)
	string date;									//���� ��������
public:
	InputInfo();
	InputInfo(string, string, string, string, string);
	InputInfo(InputInfo&);
	string getNumber();
	string getLogin();
	string getPassword();
	string getNominal();
	string getDate();
	void setNumber(string);
	void setLogin(string);
	void setPassword(string);
	void setNominal(string);
	void setDate(string);
	bool importData(const char*);					//������ ������ �� �����. ��������� ��� �����
	void getCard(string);							//�������� ���������� � �������� �� �� ��������
	bool deleteInfo();								//������� ������ �� �����
	void operator = (InputInfo&);
};