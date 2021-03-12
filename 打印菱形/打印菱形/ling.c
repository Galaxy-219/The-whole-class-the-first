#include <stdio.h>
int main()
{
	int line = 0;
	scanf_s("%d", &line);//上面打印line行，下面打印line-1行
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//打印一行，空格
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
	//打印下面
	for (i = 0; i < line - 1; i++)
	{
		//打印一行
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