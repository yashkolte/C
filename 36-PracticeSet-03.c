#include <stdio.h>
float weight(float mass);

int main()
{

    float mass;
    printf("Enter the Mass of a Body\n");
    scanf("%f", &mass);
    printf("Body of Mass excerted by Earth is %.2f", weight(mass));
    return 0;
}
float weight(float mass)
{
    float result;
    result = (float)mass + 9.8;
    return result;
}