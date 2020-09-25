/*    Always use semi colon For instructions

*/

# include<stdio.h>  //Pre prossesor directive

int main(){
    int a= 3;
    // int b= 7.7; // Not recommended because 7.7 is not an integer 
    float b= 7.7;
    char c= 'u';
    int d = 44;
    int e = 54 + 95;

    printf("The value of a is %d \n", a);  // %d for Integers // \n for new line charactor
    printf("The value of b is %f \n", b);  // %f for Real values
    printf("The value of c is %c \n", c);  // %c for Charactors
    printf("The value of a and d is %d \n", a + d);  // we can add 2 defined variables
    printf("The value of e is %d \n", e);
    return 0;
} 