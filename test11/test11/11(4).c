#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int count_one_bits(int value)
{
	int count = 0;
	do{
		count++;
	} while (value &= value - 1);
	return count;
}

int main114()
{
	printf("%d\n", count_one_bits(1999 ^ 2299));
	//�����������Ľ�����룬�ж�1�ĸ����������Ƕ��ٸ�λ��bit����ͬ
	system("pause");
	return 0;
}