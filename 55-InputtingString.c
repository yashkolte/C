#include <stdio.h>

int main()
{
    char st[50];
    printf("Enter your name: ");
    // scanf("%s", st);   // no need to enter &
    gets(st);  // To fix space in name use gets
    printf("Your name is %s", st);
    //Enter your name: yash kolte
    //Result:-    Your name is yash

    return 0;
} 