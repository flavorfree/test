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
			Sleep(100);//��ͣ
			printf("\b\b\b\b\b\b\b\b\b\b");//�˸�
			printf("          ");//�ո�����ռԭ����λ��
			printf("\n");
			//system("cls");//����
			//for (int j = 0; j <= i;j++)
			//	printf("\n");
		}
		system("cls");//����
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
	while (--a && ++b && c--)//--a��Ϊ�㼴����ֹͣ�������������
		n++;
	printf("%d,%d,%d,%d\n", a, b, c, n);
	system("pause");
	return 0;
}



int main1()
{
	int a = 3, b = 4, c = 5;
	int t = 0;
	while (a < b < c)//����a<b����ȷΪһ������Ϊ��,����<c;
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