#include <stdio.h>
#include <string.h>

int main()
{
    char st1[45] = "Hello";
    char *st2 = "Yash";
    strcat(st1, st2);
    printf("Now the st1 is %s", st1); //Without Space result
    return 0;
} 