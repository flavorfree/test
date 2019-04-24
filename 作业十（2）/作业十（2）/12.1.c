#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//unsigned int reverse_bit(unsigned int value)
//{
//	int i;
//	int sum = 0;
//	for (i = 31; i > 0; i--)
//	{
//		sum = value % 2 ;
//		value /= 2;
//		printf("%d", sum);
//	}
//	return sum;
//}


//unsigned int reverse_bit(unsigned int value)
//{
//	int i;
//	int tmp;
//	int sum = 0;
//	for (i = 0; i < 32; i++,value /= 2)
//	{
//		tmp = value % 2;
//		sum = sum * 2 + tmp;
//	}
//	return sum;
//}
//
//int main()
//{
//	printf("%u\n", reverse_bit(25));
// 
//	system("pause");
//	return 0;
//}