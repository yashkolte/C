#include <stdio.h>

int main()
{
    printf("\n\t\t-: Multiplication Table Using For loop:-\n\n");
    int n;
    printf("Enter The Number :\n");
    scanf("%d", &n);
    for (int i = 1; i <= 10; ++i)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}