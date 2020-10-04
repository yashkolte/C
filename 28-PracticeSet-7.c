#include <stdio.h>

int main()
{
    printf("\n\t\t-: Check for Prime Number :-\n\n");
    int n, prime = 1, i = 2;
    printf("Enter The Number :\n");
    scanf("%d", &n);
    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         prime = 0;
    //         break;
    //     }
    // }

    while (i < n)
    {
        if (n % i == 0)
        {
            prime = 0;
            i++; 
            break;
        }
    }
    if (prime == 0 && n != 2)
    {
        printf("This is not a Prime Number");
    }
    else
    {
        printf("This is a Prime Number");
    }
    return 0;
}