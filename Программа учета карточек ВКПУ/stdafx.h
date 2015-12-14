#pragma once
#include <iostream>
#include <locale>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <stdio.h>
#include <ctime>
#include <string>
#define LOGININFO "LoginInfo.dat"
#define INPUTFILE "InputFile.dat"
#define OUTPUTFILE "OutputFile.dat"
#define REPORT "Report.txt"
#define LOG "LogFile.log"
#define DATA "DataFile.txt"
//список действий для лог-файла
#define LOGIN "Вход в систему"
#define ADDUSER "Добавление пользователя "
#define DELETEUSER "Удаление пользователя "
#define CHANGEPASS "Изменение пароля пользователя"
#define GIVECARD "Выдача Инернет-Карты"
#define DAYREPORT "Формирование отчета за сутки"
#define MONTHREPORT "Формирование отчета за месяц"
#define PERIODREPORT "Формирование отчета за период"
#define IMPORT "Импорт данных из файла"
#define EXPORT "Экспорт данных в файл"
#define LOGOUT "Выход из системы"
using namespace std;
