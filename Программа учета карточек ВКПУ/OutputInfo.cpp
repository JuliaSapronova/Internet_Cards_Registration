#include "stdafx.h"
#include "InputInfo.h"
#include "OutputInfo.h"
#include "Date.h"

OutputInfo::OutputInfo(InputInfo& II)
{
	in = II;
}
void OutputInfo::setInfo(std::string I)
{
	info = I;
}

void OutputInfo::setUser(std::string U)
{
	user = U;
}
void OutputInfo::setClock()
{
	time_t t;
	struct tm *local_t;
	t = time(0);
	local_t = localtime(&t);
	strftime(clock, 40, "%d.%m.%Y %H:%M", local_t);
}

string OutputInfo::getInfo()
{
	return info;
}
string OutputInfo::getUser()
{
	return user;
}
char* OutputInfo::getClock()
{
	return clock;
}
InputInfo OutputInfo::getIn()
{
	return in;
}
void OutputInfo::giveCard()
{
	ofstream OS(OUTPUTFILE, ios::binary|ios::app);
	OS.write((char*)&(*this), sizeof(OutputInfo));
	OS.close();
}

void OutputInfo::dayReport(char* file)
{
	ifstream IS (OUTPUTFILE, ios::binary);
	ofstream OS (REPORT, ios::out);
	ofstream OFILE (file, ios::out);
	
	char clock[17];
	time_t t;
	struct tm *local_t;
	t = time(0);
	local_t = localtime(&t);
	strftime(clock, 17, "%d.%m.%Y 00:00", local_t);
	Date Check(clock);
	strftime(clock, 17, "%d.%m.%Y ", local_t);
	OFILE << "Интернет-карты, выданные за " << clock << endl;
	OFILE << "Номер" << "\t" << "Логин" << "\t" << "Пароль" << "\t" << "Номинал" << "\t"
				<< "Срок действия" << "\t" << "Выдано" << "\t"
				<< "Получатель" << "\t" << "Время выдачи" << endl;
	OS << clock;
	OutputInfo temp;
	string* nominals;
	int* numNominals;
	string* tempNom;
	int difNom = 0;
	while(true)
	{
		IS.read((char*)&temp, sizeof(OutputInfo));

		if(IS.eof())
			break;
		Date Real(temp.getClock());
		if(Real > Check)
		{
			OFILE << temp.getIn().getNumber() << "\t" << temp.getIn().getLogin() << "\t" 
				<< temp.getIn().getPassword() << "\t" << temp.getIn().getNominal() << "\t"
				<< temp.getIn().getDate() << "\t" << temp.getUser() << "\t"
				<< temp.getInfo() << "\t" << temp.getClock() << endl;
			if(temp.in.getNominal() != "\0")
			{
				bool exist = true;
				for(int j = 0; j < difNom; j++)
				{
					if((nominals[j]==temp.in.getNominal()))
						exist = false;
				}
				if(exist || difNom == 0)
				{
					if(difNom)
					{
						tempNom = new string [difNom];
						for(int i = 0; i < difNom; i++)
						{
							tempNom[i] = nominals[i];
						}
						delete [] nominals;
					}
					nominals = new string[difNom+1];
					for(int i = 0; i < difNom; i++)
					{
						nominals[i] = tempNom[i];
					}
					nominals[difNom] = temp.in.getNominal();
					if(difNom)
					{
						delete [] tempNom;
					}
					difNom++;
				}
			}
		}
	}
	IS.clear();
	IS.seekg(0, ios::beg);
	numNominals = new int[difNom];
	for (int j = 0; j < difNom; j++)
	{
		numNominals[j] = 0;
	}
	while(true)
	{
		IS.read((char*)&temp, sizeof(OutputInfo));
		if(IS.eof())
			break;
		Date Real(temp.getClock());
		if(Real > Check)
		{
			for(int i = 0; i < difNom; i++)
			{
				if(nominals[i]==temp.in.getNominal())
				{
					numNominals[i]++;
				}
			}
		}
	}
	for(int i = 0; i < difNom; i++)
	{
		OS << endl << nominals[i] << " " << numNominals[i] ;
	}
	IS.close();
	OS.close();
}
void OutputInfo::monthReport(char* file)
{
	ifstream IS (OUTPUTFILE, ios::binary);
	ofstream OS (REPORT, ios::out);
	ofstream OFILE (file, ios::out);

	char clock[17];
	time_t t;
	struct tm *local_t;
	t = time(0);
	local_t = localtime(&t);
	strftime(clock, 17, "01.%m.%Y 00:00", local_t);
	Date Check(clock);
	strftime(clock, 17, "01.%m.%Y ", local_t);
	OFILE << "Интернет-карты, выданные c " << clock << endl;
	OFILE << "Номер" << "\t" << "Логин" << "\t" << "Пароль" << "\t" << "Номинал" << "\t"
				<< "Срок действия" << "\t" << "Выдано" << "\t"
				<< "Получатель" << "\t" << "Время выдачи" << endl;
	OS << clock;
	OutputInfo temp;
	string* nominals;
	int* numNominals;
	string* tempNom;
	int difNom = 0;
	while(true)
	{
		IS.read((char*)&temp, sizeof(OutputInfo));

		if(IS.eof())
			break;
		Date Real(temp.getClock());
		if(Real > Check)
		{
			OFILE << temp.getIn().getNumber() << "\t" << temp.getIn().getLogin() << "\t" 
				<< temp.getIn().getPassword() << "\t" << temp.getIn().getNominal() << "\t"
				<< temp.getIn().getDate() << "\t" << temp.getUser() << "\t"
				<< temp.getInfo() << "\t" << temp.getClock() << endl;
			if(temp.in.getNominal() != "\0")
			{
				bool exist = true;
				for(int j = 0; j < difNom; j++)
				{
					if((nominals[j]==temp.in.getNominal()))
						exist = false;
				}
				if(exist || difNom == 0)
				{
					if(difNom)
					{
						tempNom = new string [difNom];
						for(int i = 0; i < difNom; i++)
						{
							tempNom[i] = nominals[i];
						}
						delete [] nominals;
					}
					nominals = new string[difNom+1];
					for(int i = 0; i < difNom; i++)
					{
						nominals[i] = tempNom[i];
					}
					nominals[difNom] = temp.in.getNominal();
					if(difNom)
					{
						delete [] tempNom;
					}
					difNom++;
				}
			}
		}
	}
	IS.clear();
	IS.seekg(0, ios::beg);
	numNominals = new int[difNom];
	for (int j = 0; j < difNom; j++)
	{
		numNominals[j] = 0;
	}
	while(true)
	{
		IS.read((char*)&temp, sizeof(OutputInfo));
		if(IS.eof())
			break;
		Date Real(temp.getClock());
		if(Real > Check)
		{
			for(int i = 0; i < difNom; i++)
			{
				if(nominals[i]==temp.in.getNominal())
				{
					numNominals[i]++;
				}
			}
		}
	}
	for(int i = 0; i < difNom; i++)
	{
		OS << endl << nominals[i] << " " << numNominals[i] ;
	}
	IS.close();
	OS.close();
}

void OutputInfo::periodReport(char* date1, char* date2, char* file)
{
	ifstream IS (OUTPUTFILE, ios::binary);
	ofstream OS (REPORT, ios::out);
	ofstream OFILE (file, ios::out);

	OFILE << "Интернет-карты, выданные c " << date1 << " по " << date2 << endl;
	OFILE << "Номер" << "\t" << "Логин" << "\t" << "Пароль" << "\t" << "Номинал" << "\t"
				<< "Срок действия" << "\t" << "Выдано" << "\t"
				<< "Получатель" << "\t" << "Время выдачи" << endl;
	Date D1(date1);
	D1.setHours(0);
	D1.setMinutes(0);
	Date D2(date2);
	D2.setHours(23);
	D2.setMinutes(59);
	OutputInfo temp;
	string* nominals;
	int* numNominals;
	string* tempNom;
	int difNom = 0;
	while(true)
	{
		IS.read((char*)&temp, sizeof(OutputInfo));

		if(IS.eof())
			break;
		Date Real(temp.getClock());
		if((D2 > Real) && (Real > D1))
		{
			OFILE << temp.getIn().getNumber() << "\t" << temp.getIn().getLogin() << "\t" 
				<< temp.getIn().getPassword() << "\t" << temp.getIn().getNominal() << "\t"
				<< temp.getIn().getDate() << "\t" << temp.getUser() << "\t"
				<< temp.getInfo() << "\t" << temp.getClock() << endl;
			if(temp.in.getNominal() != "\0")
			{
				bool exist = true;
				for(int j = 0; j < difNom; j++)
				{
					if((nominals[j]==temp.in.getNominal()))
						exist = false;
				}
				if(exist || difNom == 0)
				{
					if(difNom)
					{
						tempNom = new string [difNom];
						for(int i = 0; i < difNom; i++)
						{
							tempNom[i] = nominals[i];
						}
						delete [] nominals;
					}
					nominals = new string[difNom+1];
					for(int i = 0; i < difNom; i++)
					{
						nominals[i] = tempNom[i];
					}
					nominals[difNom] = temp.in.getNominal();
					if(difNom)
					{
						delete [] tempNom;
					}
					difNom++;
				}
			}
		}
	}
	IS.clear();
	IS.seekg(0, ios::beg);
	numNominals = new int[difNom];
	for (int j = 0; j < difNom; j++)
	{
		numNominals[j] = 0;
	}
	while(true)
	{
		IS.read((char*)&temp, sizeof(OutputInfo));
		if(IS.eof())
			break;
		Date Real(temp.getClock());
		if((D2 > Real) && (Real > D1))
		{
			for(int i = 0; i < difNom; i++)
			{
				if(nominals[i]==temp.in.getNominal())
				{
					numNominals[i]++;
				}
			}
		}
	}
	for(int i = 0; i < difNom; i++)
	{
		OS << endl << nominals[i] << " " << numNominals[i] ;
	}
	IS.close();
	OS.close();
}

void OutputInfo::exportData(char * date1, char * date2, char* file)
{
	ifstream IS (OUTPUTFILE, ios::binary);
	ofstream OS ("temp.dat", ios::binary);
	ofstream EXP(file, ios::out);
	Date D1(date1);
	D1.setHours(0);
	D1.setMinutes(0);
	Date D2(date2);
	D2.setHours(23);
	D2.setMinutes(59);
	OutputInfo temp;
	while(true)
	{
		IS.read((char*)&temp, sizeof(OutputInfo));

		if(IS.eof())
			break;
		Date Real(temp.getClock());
		if((D2 > Real) && (Real > D1))
		{
			EXP << temp.in.getNumber() << "\t" << temp.in.getLogin() << "\t" << temp.in.getNominal()
				<< "\t" << temp.in.getDate() << "\t" << temp.getInfo() << "\t" << temp.getUser()
				<< "\t" << temp.getClock() << endl;
		}
		else
		{
			OS.write((char*)&temp, sizeof(OutputInfo));
		}
	}
	IS.close();
	OS.close();
	EXP.close();
	remove(OUTPUTFILE);
	rename("temp.dat", OUTPUTFILE);

}