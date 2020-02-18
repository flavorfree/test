#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main1()
{
	char str[] = "- This, a sample string.";
	char* pch;
	printf("Splitting string \"%s\" into tokens:\n", str);
	pch = strtok(str, ",.-");
	while (pch != NULL)
	{
		printf("%s\n", pch);
		pch = strtok(NULL, ",.-");
	}
	
	system("pause");
	return 0;
}