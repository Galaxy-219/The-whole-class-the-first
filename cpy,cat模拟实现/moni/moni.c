#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

//模拟实现strncpy
/*
char* my_strncpy(const char* src, char* dest, int n)
{
	assert(dest && src);
	char* ret = dest;
	while (n--)
	{
		*dest++ = *src++;
	}
	return ret;
}
int main()
{
	char arr1[20] = "**************";
	char arr2[] = "hellow bit";
	char* con = my_strncpy(arr1, arr2, 5);
	printf("%s", con);
	return 0;
}
*/


//模拟实现strncat
/*
char* my_strncat(const char* src, char* dest, int n)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest)
	{
		*dest++;
	}
	while (n--)
	{
		*dest++ = *src++;
	}
	return ret;
}

int main()
{
	char arr1[20] = "*******";
	char arr2[20] = "hellow bit";
	char* con = my_strncat(arr1, arr2, 3);
	printf("%s", con);
	return 0;
}
*/

//模拟实现atoi
int main()
{
	int n;
	char* str = "12345";
	n = atoi(str);
	printf("n=%d\n", n);
	return 0;
}

int my_atoi(char* src)
{
	assert(src);
	char* ret = dest;
	while (n--)
	{
		*dest++ = *src++;
	}
	return ret;
}