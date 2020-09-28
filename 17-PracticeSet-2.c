#include <stdio.h>

int main()
{
    float tax = 0, income;
    printf("Enter your income\n");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income <= 250000);
    }

    if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.05 * (income <= 250000);
    }

    if (income >= 1000000)
    {
        tax = tax + 0.05 * (income <= 250000);
    }

    printf("Your net income tax is %f\n", tax);

    return 0;
}

//               <-------------------------------------try----------------------------------->
// int main()
// {
//     int tax=0;
//     printf("Enter Your Amout (In lakhs): \n");
//     scanf("%d", &tax);

//     switch (tax/100000)
//     {
//     case 1:
//         printf("Your Amount is %d, No need to pay any tax",tax);
//         break;

//     case 2:
//         printf("Your Amount is %d, You need to pay 5 percent tax ", tax*5/100);
//         break;

//     case 3:
//         printf("Your Amount is %d, You need to pay 20 percent tax ", tax*20/100);
//         break;

//     case 4:
//         printf("Your Amount is %d, You need to pay 30 percent tax ", tax*30/100);
//         break;

//     default:
//         printf("Your Amount is %d, You need to pay 30 percent tax", tax*30/100);
//         break;
//     }

//     return 0;
// }