#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.

//技巧：将被查找的字符串两个连接起来后，再进行查找，如：ABCDEABCDE
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