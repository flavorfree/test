//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//void  reverse_string(char * str)
//{
//	int end = strlen(str) - 1;
//	char tmp = str[0];
//	if ( *str )
//	{
//		str[0] = str[end];
//		str[end] = '\0';
//		reverse_string(str + 1);
//		str[end] = tmp;
//	}
//}
//
//int main()
//{
//	char str[] = "bitekeji";
//
//	reverse_string( str );
//	puts(str);
//
//	system("pause");
//	return 0;
//}