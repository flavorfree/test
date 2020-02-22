#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//1、写一个排序函数接口，能完成对整数和小数的排序。
//2、接口中多传入一个缺省参数，如果不指定，就采用A排序方式，如果指定了，就按他的选择决定排序方式（至少包含三种）。
//3、在上述的基础上，完成对结构体的排序。通过传入判断大小的函数来实现。


//void InsertSort(int * src,int n)//直接插入排序
//{
//	int i, j;
//	int tmp;
//	for (i = 1; i < n; i++)
//	{
//		tmp = src[i];
//		for (j = i; j > 0 && src[j - 1]>tmp; j--)
//		{
//			src[j] = src[j - 1];
//		}
//		src[j] = tmp;
//	}
//}
void InsertSort(float * src, float n)//直接插入排序
{
	int i, j;
	float tmp;
	for (i = 1; i < n; i++)
	{
		tmp = src[i];
		for (j = i; j > 0 && src[j - 1]>tmp; j--)
		{
			src[j] = src[j - 1];
		}
		src[j] = tmp;
	}
}

void sort(int * src, int n, int flag = 0)
{
	switch (flag)
	{
	case 0:
//		InsertSort(src, n);
		break;
	case 1:
		break;
	case 2:
		break;
	default:
		break;
	}
}

bool cmpnum(int a, int b)
{
	return a < b;//a<b成立，bool为1，不成立bool为0
}

void InsertSort(int * src, int n, bool(*cmp)(int , int) = cmpnum)
{
	int i, j;
	int tmp;
	for (i = 1; i < n; i++)
	{
		tmp = src[i];
		for (j = i; j > 0 && cmp(tmp,src[j - 1]); j--)
		{
			src[j] = src[j - 1];
		}
		src[j] = tmp;
	}
}
bool cmpwaytest(int a, int b)
{
	return a > b;
}

int main1()
{
	int a[5] = { 3, 5, 2, 1, 4 };
	float f[5] = { 6.6, 3.4, 2.1, 8.7, 3.2 };

	InsertSort(a, 5, cmpwaytest);//传入了一个排序规则
	InsertSort(f, 5);

	for (auto i : a)
	{
		cout << i << endl;
	}
	for (auto i : f)
	{
		cout << i << endl;
	}

	system("pause");
	return 0;
}