#include <stdio.h>
#include <string.h>
int MAX(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a=20;
	int b=10;
	int max;
	max= MAX(a, b);
	printf("max=%d\n",max);
	return 0;
}