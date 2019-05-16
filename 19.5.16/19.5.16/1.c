#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	int i;
	while (1)
	{
		for (i = 0; i < 10; i++)
		{

			printf("**********");
			Sleep(100);//暂停
			printf("\b\b\b\b\b\b\b\b\b\b");//退格
			printf("          ");//空格用来占原来的位置
			printf("\n");
			//system("cls");//清屏
			//for (int j = 0; j <= i;j++)
			//	printf("\n");
		}
		system("cls");//清屏
	}
	system("pause");
	return 0;
}



int main3()
{
	int a = 4;
	float b = 4.5;
	printf("%d\n", (int)b);
	system("pause");
	return 0;
}


int main2()
{
	int a = 3, b = 0, c = 5;
	int n = 0;
	while (--a && ++b && c--)//--a变为零即立即停止，不再往后计算
		n++;
	printf("%d,%d,%d,%d\n", a, b, c, n);
	system("pause");
	return 0;
}



int main1()
{
	int a = 3, b = 4, c = 5;
	int t = 0;
	while (a < b < c)//先算a<b，正确为一，错误为零,再算<c;
	{
		 t = a;
		 a = b;
		 b = t;
		 c--;
	}
	printf("%d,%d,%d\n", a, b, c);
	system("pause");
	return 0;
}