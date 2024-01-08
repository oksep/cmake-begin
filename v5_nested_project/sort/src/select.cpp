#include "sort.h"

void sort_select(int *arr, int len)
{
    // sort arr with select sort
    int i, j, tmp, min;
    for (i = 0; i < len - 1; i++)
    {
        min = i;
        for (j = i + 1; j < len; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }
}