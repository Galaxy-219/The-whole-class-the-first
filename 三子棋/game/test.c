#include <stdio.h>
#include "game.h"
void menu()
{
	printf("***************************\n");
	printf("*****1.play     0.exit*****\n");
	printf("***************************\n");
}

//��Ϸ�������㷨��ʵ��
void game()
{
	//����-����߳���������Ϣ
	char board[ROW][COL] = { 0 };//ȫ���ո�
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		char ret = IsWin();
		if (ret != = 'c')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		char ret = IsWin();
		if (ret != = 'c')
		{
			break;
		}
	}
}
if (ret == '*')
{
	printf("���Ӯ\n");

else if (ret == '#')
{
	printf("����Ӯ\n");
}
else
{
	printf("ƽ��\n");
}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
		case 0:
			printf("�˳���Ϸ\n");
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