#define _CRT_SECURE_NO_WARNINGS 1


//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ� 
//���ҳ�������֡���ʹ��λ���㣩
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
		res ^= a[i];//һ��������������൱��û���
	}
	printf("%d\n",res);
	system("pause");
	return 0;
}