#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

char* my_strcpy(char* dst, const char* src)
{
	assert(dst && src);//（断言）用于判断一个表达式，在表达式条件为 false 的时候触发异常;头文件<assert.h>
	char* ret = dst;
	while (*dst = *src)
	{
		dst++;
		src++;
	}
	return ret;
}

int main2()
{
	char dst[20] = "world";//字符数组可变化
	char* src1 = "hello";//字符串常量不可变化
	char* src2 = "he";
	char* src3 = "hellohello";
	strcpy(dst, src1);
	printf("%s\n", dst);//hello
	strcpy(dst, src2);
	printf("%s\n", dst);//he
	strcpy(dst, src3);
	printf("%s\n", dst);//hellohello
	
	char* src4 = "abc";
	char* src5 = "abcde";
	char* src6 = "abcdefghjk";
	printf("%s\n", my_strcpy(dst, src4));//abc
	printf("%s\n", my_strcpy(dst, src5));// abcde
	printf("%s\n", my_strcpy(dst, src6));//abcdefghjk

	system("pause");
	return 0;
}