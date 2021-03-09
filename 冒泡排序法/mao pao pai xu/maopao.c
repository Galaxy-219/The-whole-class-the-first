#include <stdio.h>
void bubble_sort(int arr[], int sz)
{
    int i = 0;
    for (i = 0; i < sz - 1; i++)
    {
        int j = 0;
        int flag = 1;
        for (j = 0; j < sz - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                flag = 0;
            }
        }
        if (flag == 1)
            break;
    }
}

void print_arr(int arr[], int sz)
{
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d", arr[i]);
    }
}
int main()

{
    int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, sz);
    print_arr(arr, sz);
    return 0;
}