#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int count_one_bits(int value)
{
	int count = 0;
	do{
		count++;
	} while (value &= value - 1);
	return count;
}

int main114()
{
	printf("%d\n", count_one_bits(1999 ^ 2299));
	//将两个数异或的结果传入，判断1的个数，及就是多少个位（bit）不同
	system("pause");
	return 0;
}