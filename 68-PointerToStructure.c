#include <stdio.h>

struct employee{
    int code;
};

int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    // (*ptr).code = 101;  // or you can also write : ptr->code = 101;
    ptr->code = 101;  
    printf("%d", e1.code);
    return 0;
} 