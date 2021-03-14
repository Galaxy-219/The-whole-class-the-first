#define EXAMPLE_MACRO_NAME
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>//ststem
#include<string.h>//strcmp

//shutdown -s -t 60表示60秒后关机
//shutdown -a表示取消挂机
//system专门用来执行系统命令的
int main()
{
	char input[20] = { 0 };//存储数据
	system("shutdown -s -t 60");

	again:
		printf("电脑在一分钟内关机，输入：王子瑞是猪，取消关机");
		scanf_s("%s", input);//%s字符串
	if (strcmp(input, "王子瑞是猪") == 0)//判断input中放的是不是“王子瑞是猪”，strcmp-string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}