#include "sort.h"

void sort_insert(int *arr, int len)
{
    // sort arr with insert sort
    int i, j, tmp;
    for (i = 1; i < len; i++)
    {
        tmp = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > tmp; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = tmp;
    }
}