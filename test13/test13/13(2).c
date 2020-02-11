#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int findNum(int arr[3][3], int i, int j, int n)
{
	int x = 0, y = j-1;
	while (x < i && y >= 0)
	{
		if (arr[x][y] < n)
		{
			x++;
		}
		else if (arr[x][y] > n)
		{
			y--;
		}
		else
			return 1;
	}
	return 0;
}

int main()
{
	//��һ����ά����.
	//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
	//�������������в���һ�������Ƿ���ڡ�
	int  arr[3][3] = { { 1, 3, 5 },
					 { 3, 5, 7 },
					 { 5, 7, 9 } };
	if (findNum(arr, 3, 3, 6))
	{
		printf("�ҵ��ˣ�\n");
	}
	else
	{
		printf("�Ҳ�����\n");
	}
	system("pause");
	return 0;
}