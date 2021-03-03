#include<stdio.h>
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void _swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void* e1, const void* e2))
{
	size_t i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		size_t j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{ 
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				_swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

int cmp_int(const void* e1, const void* e2)
{
	if (*(int*)e1 > *(int*)e2)
		return 1;
	else if (*(int*)e1 < *(int*)e2)
		return -1;
	else
		return 0;
}

int main()
{
	int arr[] = { 1, 5, 2, 4, 3, 9, 8, 6, 7, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
	return 0;
}