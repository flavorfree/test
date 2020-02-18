#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

int my_strcmp(char* str1, char* str2)
{
	assert(str1 && str2);
	unsigned char* s1 = (unsigned char*)str1;
	unsigned char* s2 = (unsigned char*)str2;
	while (*s1 && *s2)
	{
		if (*s1 > *s2)
		{
			return 1;
		}
		else if (*s1 < *s2)
		{
			return -1;
		}
		else
		{
			++s1;
			++s2;
		}
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return 0;
	}
	else if (*s1 == '\0')
	{
		return -1;
	}
	else
	{
		return 1;
	}
}

int main1()
{
	char* str1 = "hello";

	char* str2 = "he";
	char* str3 = "hello";
	char* str4 = "helloworld";

	printf("%d\n", strcmp(str1, str2));// 1
	printf("%d\n", strcmp(str1, str3));// 0
	printf("%d\n", strcmp(str1, str4));// -1

	printf("%d\n", my_strcmp(str1, str2));// 1
	printf("%d\n", my_strcmp(str1, str3));// 0
	printf("%d\n", my_strcmp(str1, str4));// -1

	system("pause");
	return 0;
}