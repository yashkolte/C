/*
Logical operator  

%% and 

== equal 

|| or 

!not

*/
#include <stdio.h>

int main()
{
    int age;
    printf("Enter your Age :\n");
    scanf("%d", &age);

    if(age >= 18 && age<=80){
        printf("Your are eiligable");
    
    }
    // if(age <= 80){               // Error It give both answer
    //     printf("Your are eiligable");
    // }
    
    if(age=50){                      // non zero charactor / Assignmemt
        printf("Half Century/n");
    }
    
    if(age==50){                      // Equality check
        printf("Half Century/n");
    }
    
    else{
        printf("You are not eiligable");
    }
    
    return 0;
} 