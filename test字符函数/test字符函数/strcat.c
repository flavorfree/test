#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest++)
	{
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char dest[20] = "hello";
	char* src = "world";
	strcat(dest, src);

	printf("%s\n", dest);//helloworld

	printf("%s\n", my_strcat(dest, src));//helloworld

	system("pause");
	return 0;
}