#include <stdio.h>

int main()
{
    printf("\n\t\t-: Multiplication in Reverse Order :-\n\n");
    int i, n;
    printf("Enter The Number :");
    scanf("%d", &n);
    for (i = 10; i; --i)
    {
        printf("%d x %d = %d\n", n, i, i * n);
    }

    return 0;
}