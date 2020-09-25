//Find Simple Interest

#include<stdio.h>

int main(){
    int principal, rate, year;
    printf("Enter the value of principal :");
    scanf("%d", &principal);
    printf("Enter the value of rate :");
    scanf("%d", &rate);
    printf("Enter the value of year :");
    scanf("%d", &year);

    int simpleInterest = (principal * rate * year)/100;
    printf("The value of simple Interest is %d", simpleInterest);
    return 0;
} 