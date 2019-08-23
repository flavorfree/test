#define _CRT_SECURE_NO_WARNINGS 1

//放置函数实现
#include "game.h"


void InitBoard(char board[ROW][COL], int row, int col)//棋子下落的位置，到时下子时替换空格即可
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)//打印出格子框架
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)//玩家落子
{
	int x = 0;
	int y = 0;

	printf("玩家走:>\n");
	while (1)
	{
		printf("请输入要下棋的坐标:>");
		scanf("%d %d", &x, &y);
		if ((x >= 1) && (x <= row) && (y >= 1) && (y <= col))
		{
			if (board[x - 1][y - 1] != ' ')//位置已有棋子的情况
			{
				printf("坐标别占用，请重新输入！\n");
			}
			else
			{
				board[x - 1][y - 1] = '*';
				break;
			}
		}
		else
		{
			printf("坐标有误，重新输入！\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");

	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

static int IsFull(char board[ROW][COL], int row, int col)//判断棋盘上棋子是否已落满
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0; 
		}
	}
	return 1;//满了
}

char CheckWin(char board[ROW][COL], int row, int col)//判断是否有一方已赢
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')//判断一行是否棋子都一样
		{
			return board[i][1];//返回已赢的棋子符号‘*’或‘#’
		}
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')//判断一列是否棋子都一样
		{
			return board[1][i];//返回已赢的棋子符号‘*’或‘#’
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')//判断对角线是否棋子都一样
	{
		return board[1][1];//返回已赢的棋子符号‘*’或‘#’
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')//判断对角线是否棋子都一样
	{
		return board[1][1];//返回已赢的棋子符号‘*’或‘#’
	}

	//平局--判断棋盘是否满了
	if (IsFull(board, row, col) == 1)
	{
		return 'Q'; //平局‘Q’
	}
	//继续
	return 'C';// 继续 ‘C’
}