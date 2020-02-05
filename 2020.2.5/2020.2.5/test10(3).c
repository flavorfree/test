#define _CRT_SECURE_NO_WARNINGS 1

//Ñî»ÔÈý½Ç

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int data[20][20] = { 0 };
	data[0][0] = 1;
	int n = 10;
	int i, j;

	for (i = 1; i < n; i++)
	{
		data[i][0] = 1;
		for (j = 1; j < i ; j++)
		{
			data[i][j] = data[i - 1][j - 1] + data[i - 1][j];
		}
		data[i][j] = 1;
	}
	for (i = 0; i <  n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", data[i][j]);
		}
		putchar('\n');
	}

	system("pause");
	return 0;
}