#define _CRT_SECURE_NO_WARNINGS 1

 #include<stdio.h>
 #include<string.h>

int main1()
{
	char *str1 = "http://xian";
	char str2[100] = "http://xian";
	char str3[5] = "12345";
	char str4[] = "abcdef";
	printf("strlen(str1)=%d, sizeof(str1)=%d\n", strlen(str1), sizeof(str1));
	printf("strlen(str2)=%d, sizeof(str2)=%d\n", strlen(str2), sizeof(str2));
	printf("strlen(str3)=%d, sizeof(str3)=%d\n", strlen(str3), sizeof(str3));
	printf("strlen(str4)=%d, sizeof(str4)=%d\n", strlen(str4), sizeof(str4));
	system("pause");
	return 0;
}