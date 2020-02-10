#define _CRT_SECURE_NO_WARNINGS 1


//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。 
//请找出这个数字。（使用位运算）
#include<stdio.h>
#include<stdlib.h>

#define SIZE(a) sizeof(a)/sizeof(a[0]) 

int main123()
{
	int a[] = { 1, 5, 8, 2, 6, 4, 2, 8, 5, 1, 4 };
	int i;
	int res = 0;
	for (i = 0; i < SIZE(a); i++)
	{
		res ^= a[i];//一个数被异或两次相当于没异或
	}
	printf("%d\n",res);
	system("pause");
	return 0;
}