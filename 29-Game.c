#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("\n\t\t-: Guess The Number Game :-\n\n");
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; //Generate Random Number between 0 to 100
    // printf("The Number is %d\n", number);
    do
    {
        printf("Guess the the number between 1 to 100 :\n");
        scanf("%d", &guess);
        if (guess > number) 
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("You guessed it in %d attempts\n", nguesses);
        }
        nguesses++;
    } while (guess != number);
    return 0;
}