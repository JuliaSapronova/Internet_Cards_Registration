#include "stdafx.h"
#include "Date.h"

Date::Date(char *D)
{
	day = 10*(D[0]-'0')+D[1]-'0';
	month = 10*(D[3]-'0')+D[4]-'0';
	year = 1000*(D[6]-'0')+100*(D[7]-'0')+10*(D[8]-'0')+D[9]-'0';
	hours = 10*(D[11]-'0')+D[12]-'0';
	minutes = 10*(D[14]-'0')+D[15]-'0';
}

int Date::getDay()
{
	return day;
}
int Date::getMonth()
{
	return month;
}
int Date::getYear()
{
	return year;
}
int Date::getHours()
{
	return hours;
}
int Date::getMinutes()
{
	return minutes;
}
bool Date::operator >(Date &D)
{
	if(year > D.getYear())
	{
		return true;
	}
	else
	{
		if(year < D.getYear())
			return false;
		else
		{
			if(month > D.getMonth())
			{
				return true;
			}
			else
			{
				if(month < D.getMonth())
					return false;
				else
				{
					if(day > D.getDay())
					{
						return true;
					}
					else
					{
						if(day < D.getDay())
						{
							return false;
						}
						else
						{
							if(hours > D.getHours())
							{
								return true;
							}
							else
							{
								if(hours < D.getHours())
								{
									return false;
								}
								else
								{
									if(minutes >= D.getMinutes())
									{
										return true;
									}
									else
									{
										return false;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
void Date::setHours(int H)
{
	hours = H;
}

void Date::setMinutes(int M)
{
	minutes = M;
}