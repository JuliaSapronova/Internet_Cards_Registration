#include "stdafx.h"
#include "Login.h"

CLogin ::CLogin()
{	
}
CLogin :: CLogin(string UN, string N, string PW, bool AR)
{
	username = UN;
	name = N;
	password = PW;
	accessRights = AR;
}
string CLogin :: getUsername()
{
	return username;
}
string CLogin :: getName()
{
	return name;
}

string CLogin ::getPassword()

{
	return password;
}
bool CLogin ::getAccess()

{
	return accessRights;
}
bool CLogin::getAccessRights(string UN)
{
	ifstream IS;
	IS.open(LOGININFO, ios::binary);
	CLogin temp;
	while(!IS.eof())
	{
		IS.read((char*)&temp, sizeof(CLogin));
		if(temp.getUsername() == UN)
		{
			IS.close();
			return temp.getAccess();
		}
	}
	IS.close();
}

void CLogin::operator =(CLogin & U)
{
	username = U.getUsername();
	password = U.getPassword();
}
bool CLogin::operator ==(CLogin & U)
{
	if(username == U.username && password == U.password)
		return true;
	else 
		return false;
}

string CLogin::findUsername(string N)
{
	ifstream IS;
	IS.open(LOGININFO, ios::binary);
	CLogin temp;
	while(!IS.eof())
	{
		IS.read((char*)&temp, sizeof(CLogin));
		if(temp.getName() == N)
		{
			IS.close();
			return temp.getUsername();
		}
	}
	IS.close();
}
string CLogin::findName(string UN)
{
	ifstream IS;
	IS.open(LOGININFO, ios::binary);
	CLogin temp;
	while(!IS.eof())
	{
		IS.read((char*)&temp, sizeof(CLogin));
		if(temp.getUsername() == UN)
		{
			IS.close();
			return temp.getName();
		}
	}
	IS.close();
}
bool CLogin::exist(std::string UN)
{
	ifstream IS;
	IS.open(LOGININFO, ios::binary);
	if (!IS.is_open())
	{
		return false;
	}

	CLogin temp;
	while(!IS.eof())
	{
		IS.read((char*)&temp, sizeof(CLogin));
		if(temp.getUsername() == UN)
		{
			IS.close();
			return true;
		}
	}
	IS.close();
	return false;
}
bool CLogin::existName(std::string N)
{
	ifstream IS;
	IS.open(LOGININFO, ios::binary);
	if (!IS.is_open())
	{
		return false;
	}

	CLogin temp;
	while(!IS.eof())
	{
		IS.read((char*)&temp, sizeof(CLogin));
		if(temp.getName() == N)
		{
			IS.close();
			return true;
		}
	}
	IS.close();
	return false;
}
bool CLogin:: addAccount()
{
	try
	{
		if(exist(username))
			throw 0;
		ofstream OS(LOGININFO, ios::binary|ios::app);
		if (!(OS.is_open()))
		{	
			OS.close();
			throw 0;
		}
		OS.write((char*)&(*this), sizeof(CLogin));
		OS.close();
		return true;
	}
	catch(...)
	{
		return false;
	}
}
bool CLogin::deleteAccount(std::string UN)
{

	try
	{
		if(!exist(UN))
			throw 0;
		ifstream IS(LOGININFO, ios::binary);
		if (!(IS.is_open()))
			throw 0;
		ofstream OS("TEMP.dat", ios::binary|ios::trunc);
		if (!(OS.is_open()))
			throw 0;
		while(true)
		{
			IS.read((char*)&(*this), sizeof(CLogin));
			if(IS.eof())
				break;
			if(username != UN)
			{
				OS.write((char*)&(*this), sizeof(CLogin));
			}
		}
		IS.close();
		OS.close();
		remove(LOGININFO);
		rename("TEMP.dat", LOGININFO);
	}
	catch(...)
	{
		return false;
	}
	return true;
}
bool CLogin::changePassword(std::string UN, std::string PW)
{

	try
	{
		ifstream IS(LOGININFO, ios::binary);
		ofstream OS("TEMP.dat", ios::binary|ios::trunc);
		while(true)
		{
			IS.read((char*)&(*this), sizeof(CLogin));
			if(IS.eof())
				break;
			if(name != UN)
			{
				OS.write((char*)&(*this), sizeof(CLogin));
			}
			else
			{
				password = PW;
				OS.write((char*)&(*this), sizeof(CLogin));
			}
		}
		IS.close();
		OS.close();
		remove(LOGININFO);
		rename("TEMP.dat", LOGININFO);
	}
	catch(...)
	{
		return false;
	}
	return true;
}

bool CLogin::changeAccessRights(std::string UN, bool AR)
{

	try
	{
		if(!exist(UN))
			throw 0;
		ifstream IS(LOGININFO, ios::binary);
		ofstream OS("TEMP.dat", ios::binary|ios::trunc);
		while(true)
		{
			IS.read((char*)&(*this), sizeof(CLogin));
			if(IS.eof())
				break;
			if(username != UN)
			{
				OS.write((char*)&(*this), sizeof(CLogin));
			}
			else
			{
				accessRights = AR;
				OS.write((char*)&(*this), sizeof(CLogin));
			}
		}
		IS.close();
		OS.close();
		remove(LOGININFO);
		rename("TEMP.dat", LOGININFO);
	}
	catch(...)
	{
		return false;
	}
	return true;
}

bool CLogin::checkAccess(std::string UN, std::string PW)
{
	ifstream IS;
	IS.open(LOGININFO, ios::binary);
	if (!(IS.is_open()))
		return false;
	CLogin temp;
	while(!IS.eof())
	{
		IS.read((char*)&temp, sizeof(CLogin));
		if((temp.getUsername() == UN)&&(temp.getPassword() == PW))
		{
			IS.close();
			return true;
		}
	}
	IS.close();
	return false;
}