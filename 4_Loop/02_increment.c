#include <stdio.h>

int main()
{
    // There are Increment and Decrement operators in C. The Increment Operaotr is ++ and the Decrese Operator is --
    int i = 9;
    printf("The value of i is: %d\n", i++);     // This will print the value of 'i', then will increase it's value
    printf("The value of i is: %d\n", i);
    printf("The value of i is: %d\n", --i);     // This will dicrease the value of 'i', then will print it's value
    return 0;
}