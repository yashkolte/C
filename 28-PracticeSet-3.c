#include <stdio.h>

int main()
{
    printf("\n\t\t-: Addition from Zero to Your Given Number Using While & For loop:-\n\n");
    int i = 0, sum = 0, n;
    printf("Enter The number :\n");
    scanf("%d", &n);

    // for (i = 0; i <= n; i++)
    // {
    //     sum += i;
    // }

    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("The sum of Number from 0 to %d is %d\n", n, sum);

    return 0;
}