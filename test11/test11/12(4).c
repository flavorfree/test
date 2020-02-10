#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//有一个字符数组的内容为:"student a am i",
//	请你将数组的内容改为"i am a student".
void reverse_part(char* str, int start, int end)//单词逆序
{
	int i, j;
	char tmp;
	for (i = start, j = end; i < j; i++, j--)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
}
int main() 
{
	char src[] = "I am a student";
	int i;
	int start = 0;
	int end; 
	for (i = 0; src[i]; i++)
	{
		if (src[i] == ' ')//把一句话分为多个单词部分
		{
			end = i - 1;
			reverse_part(src, start, end);//将单词逆序
			start = i + 1;
		}
	}
	reverse_part(src, start, i -1);//逆序最后一个单词
	reverse_part(src, 0, i - 1);//将整体逆序
	puts(src);
	system("pause");
	return 0;
}