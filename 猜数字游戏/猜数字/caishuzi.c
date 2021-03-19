#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("******************\n");
	printf("****  1.play  ****\n");
	printf("****  0.exit  ****\n");
	printf("******************\n");
}
//TDD-测试驱动开发
//RAND_MAX--rand函数能返回随机数的最大值
void game()
{
	int random_num = rand() % 100 + 1;
	int input = 0;
	while (1)
	{
		printf("请输入猜的数字>:");
		scanf_s("%d", &input);
		if (input > random_num)
		{
			printf("猜大了\n");
		}
		else if (input < random_num)
		{
			printf("猜小了\n");
		}
		else 
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择>:");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			    game();
			    break;
		case 0:
				break;
		default:
				printf("选择错误，重新输入!\n");
				break;
		}
	} while (input);
	return 0;
}
