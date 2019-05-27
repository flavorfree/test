#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse_part(char *a, int start, int end)
{
	int i, j;
	char tmp;
	for (i = start, j = end; i < j; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
void round(char *a, int n)
{
	int len = strlen(a);
	int pos = len - n % len;
	reverse_part(a,0,pos-1);//������ǰ����
	reverse_part(a, pos, len - 1);//������󲿷�
	reverse_part(a, 0, len - 1);//�����������
}
int main()
{
	char a[] = "abcd";
	round(a, 2);
	puts(a);
	system("pause");
	return 0;
}