#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

void round(char* src, int n)
{
	int len = strlen(src);
	int pos = len - n % len;
	char tmp[256] = { 0 };

	strcpy(tmp, src + pos);
	strncat(tmp, src, pos);
	strcpy(src, tmp);
	
}

int main1()
{
	char src[] = "ABCDE";
	int n;
	scanf("%d", &n);
	round(src, n);
	puts(src);
	system("pause");
	return 0;
}