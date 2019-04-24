#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void pf(int a[], int n)

{
	int j;
	for (j = 0; j < n; j++)
	{
		printf(" %d ", a[j]);
	}
	printf("\n");
}

int main()
{
	int a[10] = { 0 };
	int i, j;
	a[0] = 1;
	printf(" %d \n", a[0]);
	for (i = 1; i < 10; i++)
	{
		a[i] = 1;
		for (j = i-1; j > 0; j--)
		{
			a[j] = a[j - 1] + a[j];
		}
		a[0] = 1;
		pf(a, i+1);
	}



	system("pause");
	return 0;
}