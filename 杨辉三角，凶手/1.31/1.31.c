#include <stdio.h>
//判断电脑为大端存储还是小端存储
int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	//或return *(char*)&a;
	return *p;
}
int main()
{
	if (check_sys() == 1)
	{
		printf("小端");
	}
	else
		printf("大端");
	return 0;
}



//杨辉三角
int main()
{
	int arr[40][40] = { 1 };
	int i = 0;
	int j = 0;
	int n = 0;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			arr[i][0] = 1;
			if (i == 0 || j == 0)
			{
				arr[i][j] = 1;
			}
			else
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

//四个人里有一个人是凶手
int main()
{
	int murder[4] = { 0 }; //默认4个人都不是凶手

	int i;
	for (i = 0; i < 4; i++) //遍历假设四个人中的某个人是凶手
	{
		murder[i] = 1; //假设某个人是凶手
		if ((murder[0] != 1) +
			(murder[2] == 1) +
			(murder[3] == 1) +
			(murder[3] != 1) == 3)
		{
			break; //满足就代表就是你了！
		}
		murder[i] = 0; //不满足还他清白
	}

	putchar('A' + i); //打印凶手的编号。我们的编号是0 1 2 3，加上'A'后变成A B C D。
	return 0;
}