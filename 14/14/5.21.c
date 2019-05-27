#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main10()
{
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
	int *p;
	p = a[0];
	printf("%d", p[0]);
	system("pause");
	return 0;
}


int main9()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int *p = (int *)(&a + 1);
	printf("%d,%d", *(a + 1), *(p - 1));
	system("pause");
	return 0;
}

//void print_arr1(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for(i=0; i<row; i++)
//	{       
//		for(j=0; j<col; j++) 
//		{            
//			printf("%d ", arr[i][j]); 
//		}     
//			printf("\n");   
//	} 
//} 
//void print_arr2(int (*arr)[5], int row, int col)
//{  
//		int i = 0; 
//		int j = 0;
//		for(i=0; i<row; i++)  
//		{      
//			for(j=0; j<col; j++)    
//			{     
//				printf("%d ", arr[i][j]); 
//			}    
//		printf("\n");   
//		}
//} 
//int main() 
//{   
//		int arr[3][5] = {1,2,3,4,5,6,7,8,9,10}; 
//		print_arr1(arr, 3, 5); 
//		print_arr2(arr, 3, 5);
//	system("pause");
//	return 0;
//}


int main8()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);//arr表示数组首元素的地址
	printf("%p\n", &arr);//&arr表示数组的地址

	printf("arr+1 = %p\n", arr + 1);//arr+1，跳过整个数组的大小，相差为4
	printf("&arr+1 = %p\n", &arr + 1);//&arr+1相对于&arr差值是40

	system("pause");
	return 0;
}


int main7()
{
	char str1[] = "hello world.";
	char str2[] = "hello world.";//相同的常量字符串去初始化不同的数组会开辟出不同的内存块
	char *str3 = "hello world.";
	char *str4 = "hello world.";//指针指向同一个字符串的时候，会指向同一块内存
	if (str1 ==str2)
		printf("str1 and str2 are same\n");
	else
		printf("str1 and str2 are not same\n");
	if (str3 ==str4)
		printf("str3 and str4 are same\n");
	else
		printf("str3 and str4 are same\n");
	system("pause");
	return 0;
}


int main6()
{
	int i = -20;
	unsigned int j = 10;
	printf("%u\n", i + j);//signed和unsigned,运算结果为unsigned
	system("pause");
	return 0;
}


int main5()
{
	char a = -128;
	char b = 128;
	printf("%u %u\n", a,b);
	system("pause");
	return 0;
}


int main4()
{
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("%d %d %d\n", a, b, c);
	system("pause");
	return 0;
}


int main3()
{
	int p = 5;
	printf("%d\n", sizeof(p++));//指针变量在内存里都只开辟4个字节的内存空间
	printf("%d\n", p);
	system("pause");
	return 0;

}


int main2()
{
	int n = 9;
	float *pFloat = (float *)&n;
	printf("%d\n", n);
	printf("%f\n", *pFloat);
	system("pause");
	return 0;
}


int main1()
{
	char a = -128;
	char b = -127;
	char c = -126;
	printf("%d %d %d\n", a, b, c);
	printf("%u %u %u\n", a, b, c);
	system("pause");
	return 0;
}