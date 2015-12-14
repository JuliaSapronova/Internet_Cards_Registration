#include "stdafx.h"
#pragma once
class InputInfo //класс для работы в файлом, содержащим информацию о доступных карточках
{
private:
	string number;									//номер карточки
	string login;									//логин
	string password;								//пароль
	string nominalvalue;							//номинал карточки(в минутах)
	string date;									//срок действия
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
	bool importData(const char*);					//импорт данных из файла. принимает имя файла
	void getCard(string);							//получить информацию о карточке по ее номиналу
	bool deleteInfo();								//удалить запись из файла
	void operator = (InputInfo&);
};