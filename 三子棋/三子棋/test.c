#define _CRT_SECURE_NO_WARNINGS 1

//������Ϸ���߼�

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
	InitBoard(board, ROW, COL);//����λ��
	DisplayBoard(board, ROW, COL);//����
	while (1)
	{
		PlayerMove(board, ROW, COL);//�������
		DisplayBoard(board, ROW, COL);//��ӡ�����̣��Լ����ӵ�λ��
		ret = CheckWin(board, ROW, COL);//�жϵ�ǰ���������
		if (ret != 'C')//ûӮ������Ӯ�˽���
		{
			break;
		}
		ComputerMove(board, ROW, COL);//��������
		DisplayBoard(board, ROW, COL);//��ӡ�����̣��Լ����ӵ�λ��
		ret = CheckWin(board, ROW, COL);//�жϵ�ǰ���������
		if (ret != 'C')//ûӮ������Ӯ�˽���
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
	}
}

int main()
{
	int input = 0;
	srand(time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				game();//����Ϸ
				break;
		case 0:
				printf("�˳���Ϸ\n");
				break;
		default:
				printf("ѡ�����������ѡ��\n");
				break;
		}
	} while (input);
	return 0;
}