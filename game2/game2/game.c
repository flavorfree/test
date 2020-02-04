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

void UpdateMap(char show_map[ROW][COL], char mine_map[ROW][COL], int i,int j)//判断该位置四周地雷的个数
{
	int count = 0;//地雷个数
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
	char show_map[ROW][COL];//展示给玩家的地图
	char mine_map[ROW][COL];//显示出地雷的地图

	Init(show_map, mine_map);//初始化地图

	int blank_count = 0;
	while (1)
	{
		PrintMap(mine_map);

		PrintMap(show_map);

		printf("请输入坐标:>");
		int i = 0;
		int j = 0;
		scanf("%d %d", &i, &j);
		if (i < 0 || i >=ROW || j <0 || j >=COL)
		{
			printf("输入有误，请重新输入：>\n");
			continue;
		}
		if (show_map[i][j] != '*')
		{
			printf("该位置已被翻开，请重新输入：>\n");
			continue;//continue再次从循环头部开始向下走
		}
		if (mine_map[i][j] == '1')
		{
			PrintMap(mine_map);
			printf("游戏结束!GOODBYE!\n");
			break;
		}
		blank_count++;
		if (blank_count == ROW * COL - COUNT)
		{
			printf("扫雷成功！");
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
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束！\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
		}
	}
	system("pause");
	return 0;
}