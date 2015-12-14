#include "stdafx.h"
#include "InputInfo.h"
#pragma once
class OutputInfo 
{
private:
	InputInfo in;									//���������� � ��������
	string info;									//���������� � �������(����� ������� ��� ���������)
	string user;									//��� ������������ ���������
	char clock[40];									//����� ������ ��������
public:
	OutputInfo() {}
	OutputInfo(InputInfo&);
	void setInfo(string);
	void setClock();
	void setUser(string);
	InputInfo getIn();
	string getInfo();
	string getUser();
	char* getClock();
	void giveCard();									//�������� ���������� � ��������, ������������ � ������� � ����
	void dayReport(char*);								//������������ ����� �� ������� �����
	void monthReport(char*);							//������������ ����� �� ������� �����
	void periodReport(char*, char*, char*);				//������������ ����� �� ������
	void exportData(char*, char*, char*);				//������� ������ �� ����� � �������������� � ������ ����
};