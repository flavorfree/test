#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

char* my_strstr(const char* dest, const char* src)
{
	assert(dest && src);
	char* str1 = (char*)dest;
	char* str2 = (char*)src;
	char* str3 = NULL;

	while (*str1)
	{
		str3 = str1;
		str2 = src;
		while (*str3 && *str2 && (*str3 == *str2))//查找两字符串相同的部分，看dest是否包含有src
		{
			str3++;
			str2++;
		}
		if (*str2 == '\0')
			return str1;
		str1++;
	}
	return NULL;
}

int main()
{
	char* dest = "hellword";
	char* src1 = "ll";
	char* src2 = "llp";
	printf("%s\n", strstr(dest, src1));// llword
	printf("%s\n", strstr(dest, src2));// (null)
	
	printf("%s\n", my_strstr(dest, src1));// llword
	printf("%s\n", my_strstr(dest, src2));// (null)

	system("pause");
	return 0;
}