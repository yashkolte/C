#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int number, guess;
    srand(time(0));
    number = rand()%100 + 1;  //Generate Random Number between 0 to 100
    printf("The Number is %d", number);

    return 0;
} 