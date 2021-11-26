#include <stdio.h>
// ********************    Function Prototype    ********************
double avarage(int, int, int);

int main()
{
    printf("The avarage of 1, 3, 5 is: %lf", avarage(1, 3, 5));
    // ********************    Function Calling    ********************

    return 0;
}

// ********************    Function Body    ********************
double avarage(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}