#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

 
int main()
{
	char a = 258;//1 00000010  char aֻ��8���ֽڿռ�
	printf("%d \n", a);
	system("pause");
	return 0;
}


int main4()
{
	unsigned int a = -2;
	printf("a = %d,a = %u \n", a, a);
	system("pause");
	return 0;
}


int main3()
{
	int n = 6;
	int m = sizeof(n++);//sizeof�ڱ���ʱִ��
	printf("m = %d,n = %d \n", m, n);
	system("pause");
	return 0;
}


int main2()
{
	char a[] = "abc\012abc";
	char b[] = "abc\0abc";
	int n = sizeof(a);
	int m = sizeof(b);
	printf("n = %d, m = %d\n", n, m);//  \012Ϊһ����abc\012abc���滹��һ��\0ռһ���ռ�
	n = strlen(a);
	m = strlen(b);// \0�ַ���������־
	printf("n = %d, m = %d", n, m);
	system("pause");
	return 0;
}


int main1()
{
	int a = 5, b = 7;
	int max = (a + b + abs(a - b)) / 2; //(�����ж������������)
	printf("%d \n", max);
	system("pause");
	return 0;
}