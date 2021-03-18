#include <stdio.h>
#include <assert.h>
#include <string.h>

//模拟实现strcat
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hellow ";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}


//模拟实现strcmp
//char* my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		*s1++;
//		*s2++;
//	}
//	return *s1 - *s2;
//}
//
//int main()
//{
//	int ret = my_strcmp("abq", "abcdef");
//	printf("%d\n", ret);
//	return 0;
//}


//模拟实现strcpy
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "**************";
//	char arr2[] = "hellow bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//模拟实现strlen
//int my_strlen(const char* str)
//{
//	assert(str!=NULL);
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "hellow bit";
//	int ret=my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}


//模拟实现strstr
//char* my_strstr(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	char* cp = s1;
//	while (*cp)
//	{
//		char* p1 = cp;
//		char* p2 = s2;
//		while ((*p1 != '\0') && (*p2 != '\0') && (*p1 == *p2))
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//		{
//			return cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bcd";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//	printf("找不到子串");
//	return 0;
//}


//模拟实现memcpy
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 16);
//	return 0;
//}
//
//
////模拟实现memmove
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		//从前向后拷贝
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//从后向前拷贝
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr+2, arr, 16);
//	return 0;
//}