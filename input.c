# include <stdio.h>

int main(){

    int a, b;
    printf("Enter the value of a \n");
    scanf("%d", &a);  //& address of a
   
    printf("Enter the value of b \n");
    scanf("%d", &b);  //This & is important! (AmpPercentage),(Address of)

    printf("The Sum of a and b is %d\n",a + b);
    return 0;
} 