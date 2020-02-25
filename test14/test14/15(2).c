#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现

int main()
{
	int drink = 20;
	int cover = 20;
	int sum = 20;
	while (cover != 1)
	{
		drink = cover;
		cover = drink / 2 + drink % 2;
		sum += drink / 2;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}