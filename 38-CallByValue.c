#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a = 4, b = 7;
    printf("The Value of a and b is %d and %d\n", a, b);
    printf("The Value of 4 + 7 is %d\n", sum(a, b));
    printf("The Value of a and b after function call is %d and %d\n", a, b);

    return 0;
}

int sum(int a, int b)
{
    int c;
    c = a + b;
    b = 3434;
    a = 23432;
    return c;
}