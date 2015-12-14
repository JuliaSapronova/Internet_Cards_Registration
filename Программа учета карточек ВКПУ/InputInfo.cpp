#include "stdafx.h"
#include "InputInfo.h"
#include "OutputInfo.h"
InputInfo ::InputInfo()
{
}
InputInfo :: InputInfo(string N, string L, string P, string NV, string D)
{
	number = N;
	login = L;
	password = P;
	nominalvalue = NV;
	date = D;
}
InputInfo :: InputInfo(InputInfo& II)
{
	number = II.getNumber();
	login = II.getLogin();
	password = II.getPassword();
	nominalvalue = II.getNominal();
	date = II.getDate();
}
string InputInfo :: getNumber()
{
	return number;
}
string InputInfo::getLogin()
{
	return login;
}

string InputInfo::getPassword()
{
	return password;
}

string InputInfo::getNominal()
{
	return nominalvalue;
}

string InputInfo::getDate()
{
	return date;
}


void InputInfo::setNumber(string N)
{
	number = N;
}

void InputInfo::setLogin(string L)
{
	login = L;
}

void InputInfo::setPassword(string P)
{
	password = P;
}

void InputInfo::setNominal(string NV)
{
	nominalvalue = NV;
}

void InputInfo::setDate(string D)
{
	date = D;
}

bool InputInfo::importData(const char* file)
{
	ifstream IS(file);
	ifstream IFile(INPUTFILE, ios::binary);
	ifstream OFile(OUTPUTFILE, ios::binary);
	bool import = true;
	InputInfo temp;
	string N, L, P, NV, D;
	while(!(IS.eof()))
	{
		IS >> N;
		IS >> L;
		IS >> P;
		IS >> NV;
		IS >> D;
		IFile.clear();
		OFile.clear();
		IFile.seekg(0, ios::beg);
		OFile.seekg(0, ios::beg);
		while(!(IFile.eof()))
		{
			InputInfo tmp;
			IFile.read((char*)&(tmp), sizeof(InputInfo));
			if(tmp.getNumber() == N) 
			{
				IFile.close();
				return false;
			}
		}
		while(!(OFile.eof()))
		{
			OutputInfo tmp1;
			OFile.read((char*)&(tmp1), sizeof(OutputInfo));
			if(tmp1.getIn().getNumber() == N) 
			{
				OFile.close();
				return false;
			}
		}
	}
	IFile.close();
	OFile.close();
	ofstream OS(INPUTFILE, ios::binary|ios::app);
	IS.clear();
	IS.seekg(0, ios::beg);
	while(!(IS.eof()))
	{
		IS >> N;
		IS >> L;
		IS >> P;
		IS >> NV;
		IS >> D;
		temp.setNumber(N);
		temp.setLogin(L);
		temp.setPassword(P);
		temp.setNominal(NV);
		temp.setDate(D);
		OS.write((char*)&temp, sizeof(InputInfo));
	}
	IS.close();
	OS.close();
	return true;
}
void InputInfo::getCard(std::string NV)
{
	ifstream IS(INPUTFILE, ios::binary);
	while(true)
	{
		IS.read((char*)&(*this), sizeof(InputInfo));
		if(nominalvalue == NV)
			return;
	}
}
bool InputInfo::deleteInfo()
{
	try
	{
		ifstream IS(INPUTFILE, ios::binary);
		ofstream OS("tempfile.dat", ios::binary);
		if(!(IS.is_open()) || !(OS.is_open()))
			throw 0;
		InputInfo temp;
		while(true)
		{
			IS.read((char*)&(temp), sizeof(InputInfo));
			if(!(IS.eof()))
			{
				if(number != temp.getNumber())
				{
					OS.write((char*)&(temp), sizeof(InputInfo));

				}
			}
			else
				break;
		}
		IS.close();
		OS.close();
	}
	catch(...)
	{
		return false;
	}

	remove(INPUTFILE);
	rename("tempfile.dat", INPUTFILE);
	return true;

}

void InputInfo::operator = (InputInfo& I)
{
	number = I.getNumber();
	login = I.getLogin();
	password = I.getPassword();
	nominalvalue = I.getNominal();
	date = I.getDate();
}
