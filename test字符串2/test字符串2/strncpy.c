#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main2()
{
	char dest[20] = "world";
	char* src1 = "hellogirl";
	char* src2 = "wo";

	strncpy(dest, src1, 3);
	printf("%s\n", dest);//helld

	strncpy(dest, src1, 9);
	printf("%s\n", dest);//hellogirl

	strncpy(dest, src2, 1);
	printf("%s\n", dest);//horld

	strncpy(dest, src2, 3);
	printf("%s\n", dest);//he

	system("pause");
	return 0;
}