#include <stdio.h>
//�жϵ���Ϊ��˴洢����С�˴洢
int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	//��return *(char*)&a;
	return *p;
}
int main()
{
	if (check_sys() == 1)
	{
		printf("С��");
	}
	else
		printf("���");
	return 0;
}



//�������
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

//�ĸ�������һ����������
int main()
{
	int murder[4] = { 0 }; //Ĭ��4���˶���������

	int i;
	for (i = 0; i < 4; i++) //���������ĸ����е�ĳ����������
	{
		murder[i] = 1; //����ĳ����������
		if ((murder[0] != 1) +
			(murder[2] == 1) +
			(murder[3] == 1) +
			(murder[3] != 1) == 3)
		{
			break; //����ʹ���������ˣ�
		}
		murder[i] = 0; //�����㻹�����
	}

	putchar('A' + i); //��ӡ���ֵı�š����ǵı����0 1 2 3������'A'����A B C D��
	return 0;
}