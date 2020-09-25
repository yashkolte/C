// C program to calculate area of a rectangle by giving values in running window
/* Using hard coded inputs
   Using inputs supplied by the user*/

#include <stdio.h>

int main()
{
    int length, breadth;
    printf("What is the length of the rectangle\n");
    scanf("%d", &length);

    printf("What is the breath of the rectangle\n");
    scanf("%d", &breadth);

    printf("The area of your rectangle is %d \n", length * breadth);

    return 0;
}