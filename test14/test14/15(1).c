#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ�������ֻ����һ�ε����֣����ʵ�֡�

void find_num(int* arr, int n, int* pnum1, int* pnum2)
{
	int i = 0;
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		sum ^= arr[i];//�õ����������Ľ��
	}
	int pos;
	for (pos = 0; !(sum & 1 << pos); pos++);//posΪ��������������������λ�ϲ�ͬ�ĵط�

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