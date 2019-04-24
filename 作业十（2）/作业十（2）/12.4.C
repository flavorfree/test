//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>
//void reverse(char *src, int start, int end)
//{
//	int i, j;
//	char tmp;
//	for (i = start, j = end; i < j;i++ ,j--)
//	{
//		tmp = src[j];
//		src[j] = src[i];
//		src[i] = tmp;
//	}
//}
//
//int main()
//{
//	char src[] = "i am a student";
//	int i;
//	int start = 0,end;
//	for (i = 0; src[i]; i++)
//	{
//		if (src[i] == ' ')
//		{
//			end = i - 1;
//			reverse(src, start, end);
//			start = i + 1;
//		}
//	}
//	reverse(src, start, i-1);
//	reverse(src, 0 , i-1);
//	puts(src);
//	system("pause");
//	return 0;
//}