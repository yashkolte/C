#include <stdio.h>
void printPatten(int n);
int main()
{
    int n = 10;
    printPatten(n);
    return 0;
}

void printPatten(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    printPatten(n - 1);
    for (int i = 0; i < (2 * n - 1); i++)
    {
        printf("*");
    }
    printf("\n");
}