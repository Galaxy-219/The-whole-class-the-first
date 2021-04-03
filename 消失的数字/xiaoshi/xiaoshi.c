#include <stdio.h>
int main()
{
	int arr[] = { 0,1,2,3,5,6,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int num1 = 0;
	int num2 = 0;
	int j = 0;
	for (i = 0; i < sz+1; i++)
	{
		num1 += i;
	}
	for (j = 0; j < sz; j++)
	{
		num2 += arr[j];
	}
	printf("%d\n", num1 - num2);
	return 0;
}
