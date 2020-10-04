#include <stdio.h>

int main()
{
    int i= 5;
    printf("The Value after i++ is %d\n", i++);    //{  The value of i is 5}  }[  postincrement  ]
    printf("The Value of i is %d\n", i);           //{   The value of i is 6}
    printf("The Value after i++ is %d\n", i--);    //{  The value of i is 6}  }[  postincrement  ]
    printf("The Value of i is %d\n", i);           //{   The value of i is 5}
    printf("The Value after i++ is %d\n", ++i);    //{  The value of i is 6}  }[  preincrement  ]
    printf("The Value of i is %d\n", i);           //{   The value of i is 6}
    printf("The Value after i++ is %d\n", --i);    //{  The value of i is 5}  }[  postincrement  ]
    printf("The Value of i is %d\n", i);           //{   The value of i is 5}
    i+=10;                                         //    to increment value by number
    printf("The Value of i is %d\n", i);           //{   The value of i is 5}
    return 0;
} 