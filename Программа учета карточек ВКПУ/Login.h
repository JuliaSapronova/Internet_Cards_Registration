#include "stdafx.h"
#pragma once
class CLogin  // класс для доступа в программу и работы с учетными записями
{
private:
	string username;							//логин							
	string name;								//имя пользователя
	string password;							//пароль
	bool accessRights;							//права доступа(true - администратор, false - оператор)
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
	bool getAccessRights(string);				//Получить права доступа по имени пользователя
	bool exist(string);							//проверка наличия записи в файле по логину
	bool existName(string);							//проверка наличия записи в файле по имени
	bool addAccount();							//добавление записи в файл
	bool deleteAccount(string);					//удаление записи о пользователе из файла
	bool changePassword(string, string);		//изменение пароля
	bool changeAccessRights(string, bool);		//изменение прав доступа
	bool checkAccess(string, string);			//проверка доступа в программу
};