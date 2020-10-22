#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee yash = {100, 34.25,"Yash"};

    printf("Code is : %d \n", yash.code);
    printf("Salary is : %.2f \n", yash.salary);
    printf("Name is : %s \n","Yash");

    return 0;
} 