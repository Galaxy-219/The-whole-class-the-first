#include <stdio.h>
int main()
{
	int money = 0;
	scanf_s("%d", &money);
	int total = 0;
	total += money;//һ��Ǯһƿ�ж���Ǯ�������ƿ
	int empty = 0;
	empty = money;
	//�û�
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;//������һ������������һ����ƿ
	}
	printf("total=%d\n", total);
	return 0;
}