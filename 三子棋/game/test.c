#include <stdio.h>
#include "game.h"
void menu()
{
	printf("***************************\n");
	printf("*****1.play     0.exit*****\n");
	printf("***************************\n");
}

//游戏的整个算法的实现
void game()
{
	//数组-存放走出的棋盘信息
	char board[ROW][COL] = { 0 };//全部空格
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		char ret = IsWin();
		if (ret != = 'c')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		char ret = IsWin();
		if (ret != = 'c')
		{
			break;
		}
	}
}
if (ret == '*')
{
	printf("玩家赢\n");

else if (ret == '#')
{
	printf("电脑赢\n");
}
else
{
	printf("平局\n");
}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
		case 0:
			printf("退出游戏\n");
			break;
		default:
			break;
		}
	} while (input);
}

int main() 
{
	test();
	return 0;
}