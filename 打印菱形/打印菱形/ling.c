#include <stdio.h>
int main()
{
	int line = 0;
	scanf_s("%d", &line);//�����ӡline�У������ӡline-1��
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//��ӡһ�У��ո�
		int j = 0;
		for (j = 0; j < line-1-i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2*i-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//��ӡ����
	for (i = 0; i < line - 1; i++)
	{
		//��ӡһ��
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}