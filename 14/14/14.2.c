#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
int find(char * a, char * b)
{
	char tmp[256] = { 0 };
	strcpy(tmp, a);
	strcat(tmp, a);//stract,��tmp��a��������
	return strstr(tmp, b) ? 1 : 0;//strstr������һ���ַ���b����һ���ַ���tmp���Ƿ����

}
int main142()
{
	printf("%d\n", find("ABCDE", "DEA"));
	system("pause");
	return 0;
}