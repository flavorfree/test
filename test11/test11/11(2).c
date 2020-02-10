#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main112()
{
	int n = 123456;
	int i; 
	char num[34] = { 0 };
	for (i = 31; i >= 0; i--, n /= 2)
	{
		num[i] = n % 2 + '0';
	}

	for (i = 0; num[i]; i += 2)//奇数位
	{
		putchar(num[i]);
	}
	putchar('\n');
	for (i = 1; num[i]; i += 2)//偶数位
	{
		putchar(num[i]);
	}

	system("pause");
	return 0;
}