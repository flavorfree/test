#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
//#define SIZE(a) (sizeof(a) /sizeof(a[0]))

void pailie(int a[])
{
	int i;
	//for (i = 0; i < SIZE(a); i++)//���鵽��������ָ�룬SIZE��a���������ָ�볤�ȣ�
	for (i = 0; i < 6; i++)
	{
		if (a[i] % 2 == 1)
		{
			printf("%d", a[i]);
		}
	}
	
	for (i = 0; i < 6; i++)
	{
		if (a[i] % 2 == 0)
		{
			printf("%d", a[i]);
		}
	}
}

int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6 };
	pailie(a);
	system("pause");
	return 0;
}