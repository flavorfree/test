#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h> 

unsigned int reverse_bit(unsigned int value)
{
	int i;
	int tmp, sum = 0;
	for (i = 0; i < 32; i++, value /= 2)
	{
		tmp = value % 2;
		sum = sum * 2 + tmp;
	}
	return sum;
}

int main121()
{
	int n;
	scanf("%d", &n);
	printf("%u", reverse_bit(n));
	system("pause");
	return 0;
}