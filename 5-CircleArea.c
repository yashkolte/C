//Calculating the area of a circle And cylinder.

#include <stdio.h>

int main()
{
    int radius;
    printf("Enter the value of radius :");
    scanf("%d", &radius);

    float pi = 3.14;
    printf("The area of Circle is %f", pi * radius * radius);

    int height;
    printf("\n\nEnter the cylinder's height :");
    scanf("%d", &height);

    printf("\nThe area of Cylinder is %f", pi * radius * radius * height);

    return 0;
}