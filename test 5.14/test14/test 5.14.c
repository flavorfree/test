#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

 
int main()
{
	char a = 258;//1 00000010  char a只有8个字节空间
	printf("%d \n", a);
	system("pause");
	return 0;
}


int main4()
{
	unsigned int a = -2;
	printf("a = %d,a = %u \n", a, a);
	system("pause");
	return 0;
}


int main3()
{
	int n = 6;
	int m = sizeof(n++);//sizeof在编译时执行
	printf("m = %d,n = %d \n", m, n);
	system("pause");
	return 0;
}


int main2()
{
	char a[] = "abc\012abc";
	char b[] = "abc\0abc";
	int n = sizeof(a);
	int m = sizeof(b);
	printf("n = %d, m = %d\n", n, m);//  \012为一个，abc\012abc后面还有一个\0占一个空间
	n = strlen(a);
	m = strlen(b);// \0字符串结束标志
	printf("n = %d, m = %d", n, m);
	system("pause");
	return 0;
}


int main1()
{
	int a = 5, b = 7;
	int max = (a + b + abs(a - b)) / 2; //(不用判断来输出最大的数)
	printf("%d \n", max);
	system("pause");
	return 0;
}