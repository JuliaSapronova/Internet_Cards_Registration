#include "stdafx.h"

class Date			//����� ��� ������ � ����� � ���� ������
{
private:
	int day;
	int month;
	int year;
	int hours;
	int minutes;
public:
	Date(char*);
	int getDay();
	int getMonth();
	int getYear();
	int getHours();
	int getMinutes();
	bool operator > (Date&);
	void setHours(int);
	void setMinutes(int);
};