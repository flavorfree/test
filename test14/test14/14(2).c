#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.

//���ɣ��������ҵ��ַ������������������ٽ��в��ң��磺ABCDEABCDE
int find_round(char* src, char* find)
{
	char tmp[256] = { 0 };
	strcpy(tmp, src);
	strcat(tmp, src);

	return strstr(tmp, find) ? 1 : 0;
}

int main2()
{
	char src[] = "ABCDE";
	char find[] = "DEABC";

	printf("%d\n", find_round(src,find));
	system("pause");
	return 0;
}