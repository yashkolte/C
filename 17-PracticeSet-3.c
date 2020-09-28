#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;

    printf("Enter the First number");
    scanf("%d", &num1);
    printf("Enter the Secondnumber");
    scanf("%d", &num2);
    printf("Enter the Thired number");
    scanf("%d", &num3);
    printf("Enter the Forth number");
    scanf("%d", &num4);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            if (num1 > num4)
            {
                printf("%d is greater among four", num1);
            }
            else
            {
                printf("%d is greater among four", num4);
            }
        }
        else
        {
            printf("%d is greater among four", num3);
        }
    }
    else if (num2 > num3)
    {
        if (num2 > num4)
        {
            if (num2 > num1)
            {
                printf("%d is greater among four", num2);
            }

            else
            {
                printf("%d is greater among four", num1);
            }
        }
        else
        {
            printf("%d is greater among four", num4);
        }
    }

    else if(num3 > num4)
    {
        if (num3 > num2)
        {
            if (num3 > num1)
            {
                printf("%d is greater among four", num3);
            }
            else{
                printf("%d is greater among four", num1);
            }
        }

        else
        {
            printf("%d is greater among four", num2);
        }
    }
    else
    {
        printf("%d is greater among four", num4);
    }

    return 0;
}