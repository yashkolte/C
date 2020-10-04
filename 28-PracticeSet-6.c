#include <stdio.h>

int main()
{
    printf("\n\t\t-: Multiplication Table Uning Dowhile:-\n\n");
    printf("Enter the number  :");
    int i = 1, n;
    scanf("%d", &n);
    do
    {
        printf("%d x %d = %d\n", n, i, i * n);
        i++;
    } while (i <= 10);

    return 0;
}