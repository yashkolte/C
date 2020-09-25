/*  In terminal :
        >gcc first.c  { This will create a.exe in the current folder}
        >./a.exe      { To execute the program }
            OR
        >gccc first.c -o first.exe   { To create execution file with custom/random name}

        Use Code runner Extention for instant Execution of code without write any gcc command
*/

#include <stdio.h> //Pre prossesor directive

// Types of constant: 1. Interger Constant    2. Real Constant      3. Charactor Constant (Must be in single inverted commas)
//                    1. 1,2,3,4,5...         2. 1.25,3.54...       3. '@','a','J'...

int main()
{
    int Tom;
    int tom;
    int a = 3;
    // int b= 7.7; // Not recommended because 8.5 is not an integer
    float b = 7.7;
    int error_code; //Use valid variable to understand in future
    printf("Hello, Learn with Code Empire");
    return 0;
}