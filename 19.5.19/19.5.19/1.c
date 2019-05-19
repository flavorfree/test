#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>


int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int Div(int a, int b)
{
	if (b != 0)
		return a / b;
}
int Mod(int a, int b)
{
	return a % b;
}
int main7()
{
	int(*p[])(int, int) = {add,sub,mul,Div,Mod};
	int n = sizeof p / sizeof p[0];
	int i;
	for (i = 0; i < n; ++i)
	{
		printf("%d\n", p[i](5, 4));
	}
	system("pause");
	return 0;
}


int main6()
{//指针可以变指向，数组名交换内容
	char a[] = "123";
	char b[] = "456";
	char tmp[20];
	char *p = "111";
	char *q = "222";
	char *t;
	strcpy(tmp, a);
	strcpy(a, b);
	strcpy(b, tmp);
	puts(a);
	puts(b);
	t = p;
	p = q;
	q = t;
	puts(p);
	puts(q);
	system("pause");
	return 0;
}



int main5()
{
	int a[] = { 7, 6, 8, 9, 0, 1, 2, 3, 4, 5 };
	int n = sizeof a / sizeof a[0];
	int*p = a, *q = a + 1, *end = a + n - 1;
	for (p = a; p < a + n - 1; p++)
	{
		for (q = a; q < end; q++)
		{
			if (*q < *(q + 1))
			{
				int t = *q;
				*q = *(q + 1);
				*(q + 1) = t;
			}
		}
		end--;
	}
	
	for (p = a; p < a + n; p++)
	{
		printf("%d ", *p);
	}
	system("pause");
	return 0;
}


int main4()
{
	int a[] = { 7, 6, 8, 9, 0, 1, 2, 3, 4, 5 };
	int i, j,t;
	int n = sizeof a / sizeof a[0];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n-i-1; j++)//冒泡排序
		{
			if (a[j] < a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", *(a + i));
	}
	system("pause");
	return 0;
}


int main3()
{
	int a[3][4];
	printf("%d,%d,%d\n", a, a[0], &a[0][0]);
	printf("%d,%d,%d\n", a, a + 1,&a[1]);
	//a+1加了整个一行，单指针加一加一个元素.&a[i]=a+i(地址) a[i]=*(a+1)(内容)
	system("pause");
	return 0;
}


int main2()
{
	char a[] = { 1, 1, 1, 1, 1 };
	int *p = (int*)a;//(int*)强制类型在转换
	printf("*p = %d\n", *p);
	//*p的含义从p当前首地址开始，以p的基类型所占的字节数为偏移量，把空间里东西取出
	system("pause");
	return 0;
}



void swap(int *x, int *y)
{
	int n;
	n = *x;
	*x = *y;
	*y = n;
}
int main1()
{
	int a = 5, b = 7;
	swap(&a,&b);
	printf("%d,%d\n", a, b);
	system("pause");
	return 0;
}