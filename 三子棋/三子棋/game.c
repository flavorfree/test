#define _CRT_SECURE_NO_WARNINGS 1

//���ú���ʵ��
#include "game.h"


void InitBoard(char board[ROW][COL], int row, int col)//���������λ�ã���ʱ����ʱ�滻�ո񼴿�
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

void DisplayBoard(char board[ROW][COL], int row, int col)//��ӡ�����ӿ��
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

void PlayerMove(char board[ROW][COL], int row, int col)//�������
{
	int x = 0;
	int y = 0;

	printf("�����:>\n");
	while (1)
	{
		printf("������Ҫ���������:>");
		scanf("%d %d", &x, &y);
		if ((x >= 1) && (x <= row) && (y >= 1) && (y <= col))
		{
			if (board[x - 1][y - 1] != ' ')//λ���������ӵ����
			{
				printf("�����ռ�ã����������룡\n");
			}
			else
			{
				board[x - 1][y - 1] = '*';
				break;
			}
		}
		else
		{
			printf("���������������룡\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������:>\n");

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

static int IsFull(char board[ROW][COL], int row, int col)//�ж������������Ƿ�������
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
	return 1;//����
}

char CheckWin(char board[ROW][COL], int row, int col)//�ж��Ƿ���һ����Ӯ
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')//�ж�һ���Ƿ����Ӷ�һ��
		{
			return board[i][1];//������Ӯ�����ӷ��š�*����#��
		}
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')//�ж�һ���Ƿ����Ӷ�һ��
		{
			return board[1][i];//������Ӯ�����ӷ��š�*����#��
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')//�ж϶Խ����Ƿ����Ӷ�һ��
	{
		return board[1][1];//������Ӯ�����ӷ��š�*����#��
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')//�ж϶Խ����Ƿ����Ӷ�һ��
	{
		return board[1][1];//������Ӯ�����ӷ��š�*����#��
	}

	//ƽ��--�ж������Ƿ�����
	if (IsFull(board, row, col) == 1)
	{
		return 'Q'; //ƽ�֡�Q��
	}
	//����
	return 'C';// ���� ��C��
}