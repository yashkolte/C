/*   <----------------- Operator Precedence -------------------------->
priority 1st - * / %
         2nd - + -
         3rd - =
*/
#include <stdio.h>

int main()
{
    /*
    int x = 4;
    int y = 9;

    printf("The value of 3*x - 8*y is %d \n", 3*x -8*y);      // The value of 3*x - 8*y is -60
    printf("The value of 3*x - 8*y is %d \n", 3*(x -8*y));     // The value of 3*x - 8*y is -204
    
    */

    /*          <--------------------------- Operator Associativity------------------------------------->     */

    int x = 2;
    int y = 3;
    printf("The Value of 8*y / 3*x is %d \n", 8 * y / 3 * x);   // The Value of 8*y / 3*x is 16
    // 8*3 / 3*2 = 24/ 6  Will give wrong Answer
    // 8*4 / 3*2
    // 24 /3*2
    // 24/3 *2
    // 8 * 2
    //16

    return 0;
}