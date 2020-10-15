#include <stdio.h>

int main()
{
    int arr[10];
    // int *ptr = arr[0];
    int *ptr = arr;
    ptr = ptr + 2;
    if (ptr == &arr[3])
    {
        printf("These point to the same location in memory");
    }
    else
    {
        printf("These point to the same location in memory");
    }
    return 0;
}