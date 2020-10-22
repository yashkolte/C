#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

void show(struct employee emp){
    printf("The Code of employee is: %d\n", emp.code);
    printf("The Salary of employee is: %f\n", emp.salary);
    printf("The Name of employee is: %s\n", emp.name);
    emp.code = 34; //it does not change the value,  structure copy is going in fuction
}

int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    // (*ptr).code = 101;  // or you can also write : ptr->code = 101;
    ptr->code = 101;  
    ptr->salary = 1100.25;  
    strcpy(ptr->name, "Yash");
    show (e1);

    // printf("The code of employee is : %d\n", e1.code);
    return 0;
} 