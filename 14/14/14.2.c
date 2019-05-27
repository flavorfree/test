#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
int find(char * a, char * b)
{
	char tmp[256] = { 0 };
	strcpy(tmp, a);
	strcat(tmp, a);//stract,将tmp和a串联起来
	return strstr(tmp, b) ? 1 : 0;//strstr，搜索一个字符串b在另一个字符串tmp中是否出现

}
int main142()
{
	printf("%d\n", find("ABCDE", "DEA"));
	system("pause");
	return 0;
}