#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	for (i = 0; i < 100000; i++)
	{
		int sum = 0;
		//����i��λ��n
		int tmp = i;
		int n = 1;
		while (tmp/10)
		{
			n++;
			tmp /= 10;
		}
		//��ȡi��ÿһλ
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}