#define EXAMPLE_MACRO_NAME
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>//ststem
#include<string.h>//strcmp

//shutdown -s -t 60��ʾ60���ػ�
//shutdown -a��ʾȡ���һ�
//systemר������ִ��ϵͳ�����
int main()
{
	char input[20] = { 0 };//�洢����
	system("shutdown -s -t 60");

	again:
		printf("������һ�����ڹػ������룺����������ȡ���ػ�");
		scanf_s("%s", input);//%s�ַ���
	if (strcmp(input, "����������") == 0)//�ж�input�зŵ��ǲ��ǡ�������������strcmp-string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}