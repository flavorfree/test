#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ��

int main()
{
	int drink = 20;
	int cover = 20;
	int sum = 20;
	while (cover != 1)
	{
		drink = cover;
		cover = drink / 2 + drink % 2;
		sum += drink / 2;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}