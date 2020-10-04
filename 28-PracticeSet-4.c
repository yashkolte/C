#include <stdio.h>

int main()
{
    printf("\n\t\t-: Find the Value of factorial :-\n\n");
    int i = 0, n, fact = 1;
    printf("Enter The Number :\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("The Value of factorial %d is %d", n, fact);
    return 0;
}