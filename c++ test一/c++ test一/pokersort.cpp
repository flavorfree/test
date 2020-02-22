#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<cstdio>
using namespace std;

struct Poker
{
	char type;
	char point;
};
enum{
	BLACK,
	HEART,
	LEAF,
	DIAMONDS,
	JOKER
};
void inputpoker(Poker * pk)
{
	scanf("%c%d", &pk->type, &pk->point);
	pk->type -= 'a';
	if (pk->type == 4)
	{
		pk->point += 13;
	}
	while (getchar() != '\n');
}

void outputpoker(Poker k)
{
	char *type[5] = { "黑桃", "红桃", "梅花", "方片",""};
	char *point[16] = { "", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K","小王","大王" };

	printf("%s%s\n", type[k.type], point[k.point]);
}

int main()
{
	Poker p;
	while (1)
	{

		inputpoker(&p);
		outputpoker(p);
	}

	return 0;
}