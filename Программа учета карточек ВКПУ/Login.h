#include "stdafx.h"
#pragma once
class CLogin  // ����� ��� ������� � ��������� � ������ � �������� ��������
{
private:
	string username;							//�����							
	string name;								//��� ������������
	string password;							//������
	bool accessRights;							//����� �������(true - �������������, false - ��������)
public:
	CLogin();										
	CLogin(string, string, string, bool);	
	string getUsername();
	string getName();
	string getPassword();
	bool getAccess();					
	void operator = (CLogin&);
	bool operator == (CLogin&);
	string findUsername(string);
	string findName(string);
	bool getAccessRights(string);				//�������� ����� ������� �� ����� ������������
	bool exist(string);							//�������� ������� ������ � ����� �� ������
	bool existName(string);							//�������� ������� ������ � ����� �� �����
	bool addAccount();							//���������� ������ � ����
	bool deleteAccount(string);					//�������� ������ � ������������ �� �����
	bool changePassword(string, string);		//��������� ������
	bool changeAccessRights(string, bool);		//��������� ���� �������
	bool checkAccess(string, string);			//�������� ������� � ���������
};