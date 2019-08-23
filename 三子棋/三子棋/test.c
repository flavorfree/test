#define _CRT_SECURE_NO_WARNINGS 1

//测试游戏的逻辑

#include "game.h"

void menu()
{
	printf("******************************************\n");
	printf("***********    1. PLAY       *************\n");
	printf("***********    0. EXIT       *************\n");
	printf("******************************************\n");
}

void game()
{
	char board[ROW][COL] = {0};
	char ret = 0;
	InitBoard(board, ROW, COL);//棋子位置
	DisplayBoard(board, ROW, COL);//棋盘
	while (1)
	{
		PlayerMove(board, ROW, COL);//玩家先下
		DisplayBoard(board, ROW, COL);//打印出棋盘，以及落子的位置
		ret = CheckWin(board, ROW, COL);//判断当前棋盘上情况
		if (ret != 'C')//没赢继续，赢了结束
		{
			break;
		}
		ComputerMove(board, ROW, COL);//电脑下棋
		DisplayBoard(board, ROW, COL);//打印出棋盘，以及落子的位置
		ret = CheckWin(board, ROW, COL);//判断当前棋盘上情况
		if (ret != 'C')//没赢继续，赢了结束
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else if (ret == 'Q')
	{
		printf("平局\n");
	}
}

int main()
{
	int input = 0;
	srand(time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				game();//玩游戏
				break;
		case 0:
				printf("退出游戏\n");
				break;
		default:
				printf("选择错误，请重新选择！\n");
				break;
		}
	} while (input);
	return 0;
}