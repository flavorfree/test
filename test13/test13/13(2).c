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
	//有一个二维数组.
	//数组的每行从左到右是递增的，每列从上到下是递增的.
	//在这样的数组中查找一个数字是否存在。
	int  arr[3][3] = { { 1, 3, 5 },
					 { 3, 5, 7 },
					 { 5, 7, 9 } };
	if (findNum(arr, 3, 3, 6))
	{
		printf("找到了！\n");
	}
	else
	{
		printf("找不到！\n");
	}
	system("pause");
	return 0;
}