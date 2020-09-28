#include <stdio.h>

int main()
{
    printf("\t\t Check The Number whether it is EVEN or ODD\n");
    int a;
    printf("Enter the Number :");
    scanf("%d", &a);

    if(a%2 ==0){
        printf("%d is even\n", a);
    }
    else{
        printf("%d is odd\n", a);
    }
    return 0;
} 