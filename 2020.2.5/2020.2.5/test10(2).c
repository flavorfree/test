#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

#define SIZE(a) sizeof(a) /sizeof(a[0])
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。

int main2()
{ 
	char murder[4] = { 'a', 'b', 'c', 'd' };
	char killer;
	for (int i = 0; i < SIZE(murder); i++)
	{
		killer = murder[i];
		if ((murder[0] != killer) + (murder[2] == killer)
			+ (murder[3] == killer) + (murder[3] != killer) == 3)
			//3个人说了真话，1个人说的是假话，所以四个条件相加为3
		{
			printf("killer is %c\n", killer);
		}
	}
	system("pause");
	return 0; 
}