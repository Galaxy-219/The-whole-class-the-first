#include<stdio.h>
#include<string.h>
int main()
{
	//char arr[]='abc';
	//[a b c \0]
	// 0 1 2  3
	char arr1[] = "welcome to bit!!!!!!";
	char arr2[] = "####################";
	int left = 0;
	//int right=size(arr1)/sizeof(arr1[0])-2;//´íÎó
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr2[right];
		printf("%s\n",arr2);
		left++;
		right--;
	}
	return 0;
}