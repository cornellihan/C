#include <stdio.h>
void avgAndSum(float, float, float *, float *);

int main()
{
    float x = 10;
    float y = 149;
    float sum, avg;
    avgAndSum(x, y, &sum, &avg);
    printf("The summation of x and y is %f. And avarage is %f", sum, avg);
    return 0;
}

void avgAndSum(float a, float b, float *ptr1, float *ptr2)
{
    *ptr1 = a + b;
    *ptr2 = (a + b) / 2;
}