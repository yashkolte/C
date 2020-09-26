#include <stdio.h>

int main()
{
    // int v = 3^3;
    // printf("%d", v);
    // return 0;

    // Ques Write a program to determine whether a number is divisible by 97 or not

    int num;
    printf("Enter the number :\n");
    scanf("%d", &num);
    printf("Divisibility test returns (Here 0 means divisible): %d\n", num%97);
    return 0;
}  