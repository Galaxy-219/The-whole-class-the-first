#include <stdio.h>
int main()
{
	int money = 0;
	scanf_s("%d", &money);
	int total = 0;
	total += money;//一块钱一瓶有多少钱就买多少瓶
	int empty = 0;
	empty = money;
	//置换
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;//加上上一次遗留下来的一个空瓶
	}
	printf("total=%d\n", total);
	return 0;
}