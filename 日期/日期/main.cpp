#define _CRT_SECURE_NO_WARNINGS 1

#include"date.h"
#include<stdlib.h>

class HeapOnly{
	int m_a;

	HeapOnly() :
		m_a(0)
	{

	}
public:
	static HeapOnly * createObject();

};

HeapOnly * HeapOnly::createObject()
{
	HeapOnly * ho = new HeapOnly;
	return ho;
}

int main()
{
	Date a(2019, 9, 7);


	return 0;
}