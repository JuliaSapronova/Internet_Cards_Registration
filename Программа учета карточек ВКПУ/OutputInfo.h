#include "stdafx.h"
#include "InputInfo.h"
#pragma once
class OutputInfo 
{
private:
	InputInfo in;									//информаци€ о карточке
	string info;									//информаци€ о клиенте(номер комнаты или документа)
	string user;									//им€ пользовател€ программы
	char clock[40];									//врем€ выдачи карточки
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
	void giveCard();									//записать информацию о карточке, пользователе и клиенте в файл
	void dayReport(char*);								//сформировать отчет за текущие сутки
	void monthReport(char*);							//сформировать отчет за текущий мес€ц
	void periodReport(char*, char*, char*);				//сформировать отчет за период
	void exportData(char*, char*, char*);				//удалить данные из файла и экспортировать в другой файл
};