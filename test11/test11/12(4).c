#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//��һ���ַ����������Ϊ:"student a am i",
//	���㽫��������ݸ�Ϊ"i am a student".
void reverse_part(char* str, int start, int end)//��������
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
		if (src[i] == ' ')//��һ�仰��Ϊ������ʲ���
		{
			end = i - 1;
			reverse_part(src, start, end);//����������
			start = i + 1;
		}
	}
	reverse_part(src, start, i -1);//�������һ������
	reverse_part(src, 0, i - 1);//����������
	puts(src);
	system("pause");
	return 0;
}