#include "stdafx.h"

class Date			//класс для работы с датой в виде строки
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