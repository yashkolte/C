#include <stdio.h>

int main()
{
    int i=0;
    do{
        printf("%d\n", i);
        if(i == 4){
            break;
        }
        ++i;
    }while(i<10);
    return 0;
} 