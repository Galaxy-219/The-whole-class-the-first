#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void findTwoNum(int arr[], int n, int* pnum1, int* pnum2)
{
	int i;
	int sum = 0;
	​
		for (i = 0; i < 9; i++)
		{
			sum ^= arr[i];
		} //先找到两个数互相异或的结果
	​
		int pos;
	for (i = 0; i < 32; i++)
	{
		if (sum & 1 << i)
		{
			pos = i;
			break;
		}
	} //再找到有分歧的一位。在这一位上，两个数一定是一个1一个0
	​
		* pnum1 = *pnum2 = 0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] & 1 << pos)
		{
			*pnum1 ^= arr[i]; //这一位是1的，放在数1里
		}
		else
		{
			*pnum2 ^= arr[i]; //这一位是0的，放在数2里
		}
	}
}
