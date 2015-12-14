#include "stdafx.h"
#include "DataFile.h"
#include "InputInfo.h"


DataFile::DataFile()
{
	ifstream IS(INPUTFILE, ios::binary| ios::in);
	bool op = IS.is_open();
	ofstream OS(DATA);
	InputInfo temp;
	all = 0;
	string* tempNom;
	difNom = 0;
	while(true)
	{
		IS.read((char*)&temp, sizeof(InputInfo));
		if(IS.eof())
			break;
		if(temp.getNominal() != "\0")
		{
			bool exist = true;
			for(int j = 0; j < difNom; j++)
			{
				if((nominals[j]==temp.getNominal()))
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
				nominals[difNom] = temp.getNominal();
				if(difNom)
				{
					delete [] tempNom;
				}
				difNom++;
			}
			all++;
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
		IS.read((char*)&temp, sizeof(InputInfo));
		if(IS.eof())
			break;
		for(int i = 0; i < difNom; i++)
		{
			if(nominals[i]==temp.getNominal())
			{
				numNominals[i]++;
			}
		}
	}
	OS << all << endl;
	for(int i = 0; i < difNom; i++)
	{
		OS << nominals[i] << " " << numNominals[i] << endl;
	}
	IS.close();
	OS.close();
}

bool DataFile::exist(std::string N)
{
	for(int i = 0; i < difNom; i++)
	{
		if(nominals[i] == N)
			return true;
	}
	return false;
}

void DataFile::giveCard(std::string N)
{
	all--;
	for(int i = 0; i < difNom; i++)
	{
		if(nominals[i] == N)
		{
			numNominals[i]--;	
			if((numNominals[i] == 0) && (difNom != 1))
			{
				string* t = new string[difNom-1];
				for(int j = 0; j < difNom; j++)
				{
					if(i>j)
					{
						t[j] = nominals[j];
					}
					if(i<j)
					{
						t[j-1] = nominals[j];
					}
				}
				delete [] nominals;
				difNom--;
				nominals = new string [difNom];
				for(int k = 0; k < difNom; k++)
				{
					nominals[k] = t[k];
				}
				delete [] t;
			}
		}
	}
}

void DataFile::saveChanges()
{
	ofstream OS(DATA);
	OS << all << endl;
	for(int i = 0; i < difNom; i++)
	{
		OS << nominals[i] << " " << numNominals[i] << endl;
	}
	OS.close();
}

string* DataFile::getNominals()
{
	return nominals;
}

int DataFile::getAll()
{
	return all;
}

int DataFile::getDifNominals()
{
	return difNom;
}