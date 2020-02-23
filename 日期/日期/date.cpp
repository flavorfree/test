#define _CRT_SECURE_NO_WARNINGS 1

#include"date.h"

static unit getMonthDay(int y, unit m)
{
	if (m > 12 || m == 0)
	{
		return 0;
	}
	if (m == 4 || m == 6 || m == 9 || 11)
	{
		return 30;
	}
	else if (m == 2)
	{
		return 28 + (y % 400 == 0 || (y % 4 == 0 && y % 100));
	}
	else
	{
		return 31;
	}
}

int getLeapNum(int sy, int ey)
{
	int tmp = sy % 4;
	if (tmp)
	{
		sy += (4 - tmp);
	}
	return (ey - sy) / 4 + 1;
}

Date Date::operator+(unit delay)const 
{
	Date res = *this;
	unit tmp;
#if 1
	int numy = delay / 365;
	int numd = delay % 365;
	int flag = 0;
	if (res.m_month > 2)
	{
		flag = 1;
	}
	int leapnum = getLeapNum(1,2);



#endif
}
 