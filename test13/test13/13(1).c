#define _CRT_SECURE_NO_WARNINGS 1

//调整数组使奇数全部都位于偶数前面

#include<stdio.h>
#include<stdlib.h>

int main131()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0, j = 9;
	int tmp;
	while (1)
	{
		while (arr[i] % 2)
		{
			i++;
		}
		while (arr[j] % 2 == 0)
		{
			j--;
		}
		if (i > j)
		{
			break;
		}

		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}
	for (int n = 0; n < 10; n++)
	{
		printf("%d ", arr[n]);
	}
	system("pause");
	return 0;
}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int s[10] = { 0 };
//	int d[10] = { 0 };
//	int n, i = 0, j = 0;
//	for (n = 0; n < 10; n++)
//	{
//		if (arr[n] % 2)
//		{
//			s[i++] = arr[n];
//
//		}
//		else
//		{
//			d[j++] = arr[n];
//		}
//	}
//	for (n = 0; n < i; n++)
//	{
//		arr[n] = s[n];
//	}
//	for (n = 0; n < j; n++)
//	{
//		arr[n + i] = d[n];
//	}
//	for (n = 0; n < 10; n++)
//	{
//		printf("%d ", arr[n]);
//	}
//	system("pause");
//	return 0;
//}

//void judge(int* arr,int n)
//{
//	int start = 0;
//	int end = n;
//	int tmp;
//	for (start =0; start < end; )
//	{
//		if (arr[start] % 2 == 0 && arr[end] % 2 == 1)
//		{
//			tmp = arr[end];
//			arr[end] = arr[start];
//			arr[start] = tmp;
//			end--;
//		}
//		if (arr[start] % 2 == 0 && arr[end] % 2 == 0)
//		{
//			end--;
//		}
//		if (arr[start] % 2 == 1 && arr[end] % 2 == 0)
//		{
//			start++, end--;
//		}
//		if (arr[start] % 2 == 1 && arr[end] % 2 == 1)
//		{
//			start++;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	judge(arr,10);
//	system("pause");
//	return 0;
//}