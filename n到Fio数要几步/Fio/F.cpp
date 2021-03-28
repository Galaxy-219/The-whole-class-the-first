# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int f1 = 0;
	int f2 = 1;
	int f3 = 0;
	while (1)
	{
		if (n == 2)
		{
			printf("%d", 0);
			break;
		}
		else if (n < f2)
		{
			if (abs(f1 - n) < abs(f2 - n))
			{
				printf("%d", abs(f1 - n));
			}
			else
			{
				printf("%d", abs(f2 - n));
			}
			break;
		}
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	return 0;
}