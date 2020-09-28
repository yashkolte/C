#include <stdio.h>

int main()
{
    int grade;
    printf("The your marks \n");
    scanf("%d", &grade);

    switch (grade / 10)
    {
    case 9:
        printf("Your grade A\n");
        break;
    case 8:
        printf("Your grade B");
        break;
    case 7:
        printf("Your grade C\n");
        break;
    case 6:
        printf("Your grade D\n");
        break;
    case 5:
        printf("Your grade F\n");
        break;
   
        break;
    default:
        printf("Your grade F\n");
        break;
    }

    return 0;
}