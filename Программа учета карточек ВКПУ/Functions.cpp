#include "stdafx.h"
#include "Functions.h"
#include "vcclr.h"
using namespace System;

std::string SystemToSTDString(System::String^ SystStr)
{
	pin_ptr<const wchar_t> wCh = PtrToStringChars(SystStr);
	size_t convertedChars = 0;
	size_t  sizeInBytes = ((SystStr->Length + 1) * 2);
	char *Ch = new char [sizeInBytes];
	wcstombs_s(&convertedChars, Ch, sizeInBytes, wCh, sizeInBytes);
	string StdStr (Ch);
	return (StdStr);
}

void writeToLog(string user, const char* action)
{
	char clock[17];
	time_t t;
	struct tm *local_t;
	t = time(0);
	local_t = localtime(&t);
	strftime(clock, 17, "%d.%m.%Y\t%H:%M", local_t);
	ofstream OS(LOG, ios::app);
	OS <<  clock << "\t" << user << "\t" << action << endl;
}
char* StringToChar(System::String^ SystStr)
{
	pin_ptr<const wchar_t> wCh = PtrToStringChars(SystStr);
	size_t convertedChars = 0;
	size_t  sizeInBytes = ((SystStr->Length + 1) * 2);
	char *Ch = new char [sizeInBytes];
	wcstombs_s(&convertedChars, Ch, sizeInBytes, wCh, sizeInBytes);
	return (Ch);
}