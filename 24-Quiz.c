#include <stdio.h>

int main()
{
    int i=0, n;

    printf("Enter the number :\n");
    scanf("%d", &n);
    do{
        printf("%d\n", i);   // To print 0-10 -->   printf("%d\n", i+1);
        ++i;
    }while(i<n);

    return 0;
} 