#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number \n");
    scanf("%d", &a);

    // one liner if condition
    (a < 5)? printf("Number is less than 5") : printf("Number is greater than 5");
    return 0;
} 