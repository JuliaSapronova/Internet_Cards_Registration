#include "stdafx.h"
using namespace System;
//������� ��� ��������������� System::String^ � std::string
std::string SystemToSTDString(System::String^);
//������� ������ ���-�����(string ������������, char* ��������)
void writeToLog(string, const char*);

char * StringToChar(System::String^);