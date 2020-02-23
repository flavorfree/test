#pragma once
#include<iostream>
using namespace std;
typedef unsigned int unit;


class Date//ππ‘Ï

{
	int m_year;
	unit m_month;
	unit m_day;
public:
	Date(int y, unit m, unit d) :
		m_year(y),
		m_month(m),
		m_day(d)
	{

	}
	~Date()
	{
		cout << "123" << endl;
	}
	Date operator +(unit dslay) const;

	bool operator < (const Date & d) const;
	bool operator > (const Date & d) const;
	bool operator <= (const Date & d) const;
	bool operator <= (const Date & d) const;
	bool operator == (const Date & d) const;
	bool operator != (const Date & d) const;
	
	friend ostream &operator << (ostream & os, Date & d);
};
