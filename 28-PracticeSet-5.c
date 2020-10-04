#include <stdio.h>

int main()
{
    printf("\n\t\t-: Addition from Zero to Your Given Number Using DoWhile loop:-\n\n");
    int i = 1, sum = 0, n;
    printf("Enter the Number :\n");
    scanf("%d", &n);
    do
    {
        sum += i;
        i++;
    } while (i <= n);
    printf("The Sum of Number from Zero to %d is %d\n",n ,sum);

    return 0;
}