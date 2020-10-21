#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    int a = 34;
    char b = 'b';
    float d = 23.156;
    // employee e1;
    // e1.salary = 34.254; --> wont work without employee structure;
    struct employee e1;
    e1.code = 202001;
    e1.salary = 15000.65;
    strcpy(e1.name, "Akash");

    printf("%d", e1.code);
    return 0;
}