//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>
//
//void init(int data[], int input[])
//{
//	int i;
//	for(i = 0; i < 10; i++)
//	{
//		data[i] = input[i];
//	}
//}
//void reverse(int data[])
//{
//	int i, j;
//	int a;
//	for (i = 0, j = 9; i < j; i++, j--)
//	{
//		a = data[i];
//		data[i] = data[j];
//		data[j] = a;
//	}
//}
//void empty(int data[])
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		data[i] = 0;
//	}
//}
//void rep(int data[])
//{
//	int n;
//	for (n = 0; n < 10; n++)
//	{
//		printf("%d",data[n]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int data[10] = { 0 };
//	int input[10] = { 3, 2, 5, 6, 4, 2, 3, 4, 0, 1 };
//	init(data, input);
//	rep(data);
//
//	reverse(data);
//	rep(data);
//
//	empty(data);
//	rep(data);
//
//	system("pause");
//	return 0;
//}