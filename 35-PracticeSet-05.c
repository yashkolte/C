#include <stdio.h>

int main()
{
    int a =3;
    printf("%d %d %d", a, ++a, a++);    //  Result: 5 5 3
    // The process starts from right to left  
    return 0;
} 