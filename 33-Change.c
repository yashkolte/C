#include <stdio.h>
void change(int b);

int main()             //main b and void b are different from each other void main doesn't effect main b
{
    int b = 344;
    printf("The value of b before change is %d\n", b);
    change(b);
    printf("The value of b after change is %d\n", b);
    return 0;
}

void change(int b)
{
    b = 77;
}