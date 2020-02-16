#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

char* my_strcpy(char* dst, const char* src)
{
	assert(dst && src);//�����ԣ������ж�һ�����ʽ���ڱ��ʽ����Ϊ false ��ʱ�򴥷��쳣;ͷ�ļ�<assert.h>
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
	char dst[20] = "world";//�ַ�����ɱ仯
	char* src1 = "hello";//�ַ����������ɱ仯
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