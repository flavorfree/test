//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<ctype.h>
//
//int change1(char ch)
//{
//	return ch <= 'Z'&& ch >= 'A';
//}
//int change2(char ch)
//{
//	return ch <= 'z'&& ch >= 'a';
//}
//
//int main()
//{
//	char ch;
//
//	while (1)
//	{
//		ch = getchar();
//		if (change1(ch))
//		{
//			putchar(ch + ('a' - 'A'));
//		}
//		else if (change2(ch))
//		{
//			putchar(ch - ('a' - 'A'));
//		}
//		else if (ch <= '@')
//		{
//			break;
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//	system("pause");
//	return 0;
//}