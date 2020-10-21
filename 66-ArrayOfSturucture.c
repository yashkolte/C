#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name;
};

int main()
{
    struct employee facebook[100];
    facebook[0].code = 202001;
    facebook[0].salary = 100.25;

    return 0;
}