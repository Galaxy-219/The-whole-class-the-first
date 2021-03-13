#include <stdio.h>
#include <string.h>
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[100] = { 0 };
	gets(arr);//读取一行
	int len = strlen(arr);
	reverse(arr, arr + len - 1);//逆序整个字符串
	char* start = arr;
	char* end = arr;
	while (*start)
	{
		end = start;
		while (*end != ' '&&*end!='\0')
		{
			end++;
		}
		//end是空格的地址
		reverse(start, end - 1);//逆序单词
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
	}
	printf("%s\n", arr);
}