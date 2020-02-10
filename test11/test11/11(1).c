#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//void count_one_bit(int n)
//{
//	int a = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			a++;
//		}
//		n = n / 2;
//	}
//	printf("%d \n", a);
//}

int count_one_bit(int value)
{
	int count = 0;
	do{
		count++;
	}while (value &= value - 1);
	return count;
}

int main111()
{
	int n;
	scanf("%d", &n);
	printf("%d \n",count_one_bit(n));
	system("pause");
	return 0;
}