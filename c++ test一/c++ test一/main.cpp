#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//1��дһ���������ӿڣ�����ɶ�������С��������
//2���ӿ��жഫ��һ��ȱʡ�����������ָ�����Ͳ���A����ʽ�����ָ���ˣ��Ͱ�����ѡ���������ʽ�����ٰ������֣���
//3���������Ļ����ϣ���ɶԽṹ�������ͨ�������жϴ�С�ĺ�����ʵ�֡�


//void InsertSort(int * src,int n)//ֱ�Ӳ�������
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
void InsertSort(float * src, float n)//ֱ�Ӳ�������
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
	return a < b;//a<b������boolΪ1��������boolΪ0
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

	InsertSort(a, 5, cmpwaytest);//������һ���������
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