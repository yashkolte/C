#include <stdio.h>
// Sum is a function which takees a and b as input and returns an integer as an output

int sum(int a, int b); // Funtion Prototype declaration   // a and b are parameter

int main()
{
    int c;
    c = sum(2, 15); // Funtion Call    // 2, 15 are arguments
    printf("The value of c is %d\n", c);
    return 0;
}

int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}