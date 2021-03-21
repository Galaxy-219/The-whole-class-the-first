#include<stdio.h>
void PrintMulTable(int N)
{
	for (int i = 1; i <= N; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			printf("%d*%d=%2d  ", j, i, j * i);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	scanf_s("%d", &n);
	printf(PrintMulTable(n));
}