#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

#define SIZE(a) sizeof(a) /sizeof(a[0])
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���

int main2()
{ 
	char murder[4] = { 'a', 'b', 'c', 'd' };
	char killer;
	for (int i = 0; i < SIZE(murder); i++)
	{
		killer = murder[i];
		if ((murder[0] != killer) + (murder[2] == killer)
			+ (murder[3] == killer) + (murder[3] != killer) == 3)
			//3����˵���滰��1����˵���Ǽٻ��������ĸ��������Ϊ3
		{
			printf("killer is %c\n", killer);
		}
	}
	system("pause");
	return 0; 
}