#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；

int main1()
{
	int a, b, c, d, e;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						//因为每人只说对了一半，一个错‘0’，一个对‘1’，所以相加为1
						if ((b == 2) + (a == 3) == 1 &&  
							((b == 2) + (e == 3) == 1) &&
							((c == 1) + (d == 2) == 1) &&
							((c == 5) + (d == 3) == 1) &&
							((e == 4) + (a == 1) == 1) &&
							a != b && a != c && a != d && a != e && 
							b != c && b != d && b != e &&
							c != d && c != e &&
							d != e)
						{
							printf("a是第%d， \n"
								"b是第%d， \n"
								"c是第%d， \n"
								"d是第%d， \n"
								"e是第%d， \n",
								a, b, c, d, e);
						}
						
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}