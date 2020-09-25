#include<stdio.h>

int main(){
    float celsius;
    printf("Enter the Value of celsius :");
    scanf("%f", &celsius);

    float far = (celsius * 9/5)+ 32;
    printf("The value of this celsius temperature in Fahrenheit is %f", far);
    return 0;
} 