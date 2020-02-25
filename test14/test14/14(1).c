#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

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