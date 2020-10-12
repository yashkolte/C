#include <stdio.h>
void sumandAvg(int a, int b,int *sum,float *avg){
    *sum = a+ b;
    *avg = (float)(*sum)/2;
    }
int main()
{
    int i, j, sum;
    float avg;
    i = 3;
    j = 6;
    sumandAvg(i, j, &sum, &avg);
    printf("The value of sum is %d \n", sum);
    printf("The value of avg is %f \n", avg);
    return 0;
} 