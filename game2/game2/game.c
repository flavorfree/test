#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
#define COUNT 10
void menu()
{
	printf("**************************\n");
	printf("******   1.play    *******\n");
	printf("******   0.exit    *******\n");
	printf("**************************\n");
}

Init(char show_map[ROW][COL], char mine_map[ROW][COL])
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			show_map[i][j] = '*';
		}
	}
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			mine_map[i][j] = '0';
		}
	}

	for (int n = 0; n < COUNT; n++)
	{
		int i = rand() % ROW;
		int j = rand() % COL;
		mine_map[i][j] = '1';
	}
}

void PrintMap(char map[ROW][COL])
{
	printf("  |");
	for (int j = 0; j < COL; j++)
	{
		printf(" %d", j);
	}
	printf("\n");
	for (int j = 0; j < COL; j++)
	{
		printf("---");
	}
	printf("\n");
	for (int i = 0; i < ROW; i++)
	{
		printf(" %d|", i);
		for (int j = 0; j < COL; j++)
		{
			printf(" %c", map[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void UpdateMap(char show_map[ROW][COL], char mine_map[ROW][COL], int i,int j)//�жϸ�λ�����ܵ��׵ĸ���
{
	int count = 0;//���׸���
	if (i - 1 >= 0 && j - 1 >= 0 && mine_map[i - 1][j - 1] == '1')
	{
		count++;
	}
	if (i - 1 >= 0 && mine_map[i - 1][j] == '1')
	{
		count++;
	}
	if (i - 1 >= 0 && j + 1 < COL && mine_map[i - 1][j + 1] == '1')
	{
		count++;
	}
	if (j - 1 >= 0 && mine_map[i][j - 1] == '1')
	{
		count++;
	}
	if (j + 1 < COL && mine_map[i][j + 1] == '1')
	{
		count++;
	}
	if (i + 1 < ROW && j - 1 >= 0 && mine_map[i + 1][j - 1] == '1')
	{
		count++;
	}
	if (i + 1 < ROW && mine_map[i + 1][j] == '1')
	{
		count++;
	}
	if (i + 1 < ROW && j + 1 < COL && mine_map[i + 1][j + 1] == '1')
	{
		count++;
	}
	
	show_map[i][j] = count + '0';
}

void game()
{
	char show_map[ROW][COL];//չʾ����ҵĵ�ͼ
	char mine_map[ROW][COL];//��ʾ�����׵ĵ�ͼ

	Init(show_map, mine_map);//��ʼ����ͼ

	int blank_count = 0;
	while (1)
	{
		PrintMap(mine_map);

		PrintMap(show_map);

		printf("����������:>");
		int i = 0;
		int j = 0;
		scanf("%d %d", &i, &j);
		if (i < 0 || i >=ROW || j <0 || j >=COL)
		{
			printf("�����������������룺>\n");
			continue;
		}
		if (show_map[i][j] != '*')
		{
			printf("��λ���ѱ����������������룺>\n");
			continue;//continue�ٴδ�ѭ��ͷ����ʼ������
		}
		if (mine_map[i][j] == '1')
		{
			PrintMap(mine_map);
			printf("��Ϸ����!GOODBYE!\n");
			break;
		}
		blank_count++;
		if (blank_count == ROW * COL - COUNT)
		{
			printf("ɨ�׳ɹ���");
			break;
		}
		
		UpdateMap(show_map, mine_map, i, j);
	}
}

int main()
{
	int input = 0; 
	while (1)
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ������\n");
			break;
		default:
			printf("����������������룡\n");
		}
	}
	system("pause");
	return 0;
}