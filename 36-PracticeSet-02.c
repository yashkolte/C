#include <stdio.h>
float temp(float cel);
int main()
{
    float cel;

    printf("Enter the Temperature\n");
    scanf("%f", &cel);
    printf("The temperature in fehrenheit is %.2f %c", temp(cel));
    return 0;
}
float temp(float cel)
{

    float result;
    result = (float)(cel * 9 / 5) + 32;
    return result;
}