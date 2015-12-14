#include "stdafx.h"
using namespace System;
//Функция для конвертирования System::String^ в std::string
std::string SystemToSTDString(System::String^);
//Функция записи лог-файла(string пользователь, char* действие)
void writeToLog(string, const char*);

char * StringToChar(System::String^);