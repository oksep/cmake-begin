#include "sort.h"
#include <stdio.h>

void print_arr(int *arr, int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{

    // define an array with random inital values
    printf("sort_insert:\n");
    int arr1[10] = {1, 3, 2, 5, 4, 7, 6, 9, 8, 0};
    sort_insert(arr1, 10);
    print_arr(arr1, 10);

    printf("\n");

    // define an array with random inital values
    printf("sort_select:\n");
    int arr2[10] = {1, 3, 2, 5, 4, 7, 6, 9, 8, 0};
    sort_select(arr2, 10);
    print_arr(arr2, 10);

    return 0;
}
