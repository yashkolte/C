#include <stdio.h>

int main()
{
    int num;
    printf("Enter your number :\n");
    scanf("%d",&num);

    if(num == 1){
        printf("You entered %d", num);
    }

    else if(num == 2){
        printf("You entered %d", num);
    }

    else if(num == 3){
        printf("You entered %d", num);
    }
    
    else{
        printf("You entered wrong number!", num);
    }

    return 0;
} 