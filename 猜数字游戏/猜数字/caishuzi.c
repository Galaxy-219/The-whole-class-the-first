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
//TDD-������������
//RAND_MAX--rand�����ܷ�������������ֵ
void game()
{
	int random_num = rand() % 100 + 1;
	int input = 0;
	while (1)
	{
		printf("������µ�����>:");
		scanf_s("%d", &input);
		if (input > random_num)
		{
			printf("�´���\n");
		}
		else if (input < random_num)
		{
			printf("��С��\n");
		}
		else 
		{
			printf("�¶���\n");
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
		printf("��ѡ��>:");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			    game();
			    break;
		case 0:
				break;
		default:
				printf("ѡ�������������!\n");
				break;
		}
	} while (input);
	return 0;
}
