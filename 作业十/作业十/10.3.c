//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int i, j;
//	int a[20][20] = {0};
//	a[0][0] = 1;
//	for (i = 1; i < 10; i++)
//	{ 
//		a[i][0] = 1;
//		for (j = 1; j < i; j++)
//		{
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//		}
//		a[i][j] = 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf(" %d ", a[i][j]);
//		}
//		printf("\n");
//	}
//
//
//
//	system("pause");
//	return 0;
//}