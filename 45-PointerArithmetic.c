#include <stdio.h>

int main()
{
    // int i = 34;
    // int *ptr = &i;
    // printf("The address of i is %u\n", ptr);
    // // ptr = ptr-1;
    // ptr = ptr+1;    //{ ptr++ and ptr = ptr+1 are same}  It will add +4
    // // ptr++;   
    // printf("The address of i is %u\n", ptr);
    // return 0;

    // char c = 34;
    // char *ptr = &c;
    // printf("The address of i is %u\n", ptr); 
    // // ptr = ptr-1;
    // ptr = ptr+1;    //{ ptr++ and ptr = ptr+1 are same}  It will add +1
    // // ptr++;   
    // printf("The address of i is %u\n", ptr);
    // return 0;

    float f = 34;
    float *ptr = &f;
    printf("The address of i is %u\n", ptr); 
    // ptr = ptr-1;
    ptr = ptr+1;    //{ ptr++ and ptr = ptr+1 are same}  It will add +4
    // ptr++;   
    printf("The address of i is %u\n", ptr);
    return 0;
} 