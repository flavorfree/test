#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个只出现一次的数字，编程实现。

void find_num(int* arr, int n, int* pnum1, int* pnum2)
{
	int i = 0;
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		sum ^= arr[i];//拿到两个数异或的结果
	}
	int pos;
	for (pos = 0; !(sum & 1 << pos); pos++);//pos为单独的两个数，二进制位上不同的地方

	int num1 = 0;
	int num2 = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] & 1 << pos)
		{
			num1 ^= arr[i];
		}
		else
		{ 
			num2 ^= arr[i];
		}
	}
	*pnum1 = num1;
	*pnum2 = num2;
}

int main3()
{
	int arr[] = { 5, 3, 9, 1, 7, 5, 4, 7, 4, 9, 3, 2 };
	int num1, num2;
	find_num(arr, sizeof(arr) / sizeof(arr[0]), &num1, &num2);
	printf("%d %d\n", num1, num2);

	system("pause");
	return 0; 
}