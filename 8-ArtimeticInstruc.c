#include<stdio.h>
#include<math.h>

int main(){
     int a, b;
     printf("Enter The First Number : ");
     scanf("%d", &a);

     printf("Enter The Second Number : ");
     scanf("%d", &b);

     printf("\nThe Value of a + b is : %d\n", a + b);
     printf("The Value of a - b is : %d\n", a - b);
     printf("The Value of a * b is : %d\n", a * b);
     printf("The Value of a / b is : %d\n", a / b);
     
     int z;
     z = b * a;
    //  b * a = z;   {Error We can't write like this}
     printf("The Value of z is : %d\n", z);

     // No operator is assumed to be present
     // printf("The value of 4 * 5 is %d\n", 4.5);    Its wrong
     // printf("The value of 4 * 5 is %d\n", (4)(5) );    Its wrong
     // printf("The value of 4 ^ 5 is %d\n", 4^5 );    --> Bitwise XOR operator it does not produce 4 to the power 5
     printf("The value of 4 ^ 5 is %f\n", pow(4, 5)); // we need to include math.h

     printf("The value of 3.0/9 is %f\n", 3.0/9);  // The value of 3.0/9 is 0.333333

     // int i = ab ;   Invaild
     // int i = a*b;  Is valid
     return 0;
} 