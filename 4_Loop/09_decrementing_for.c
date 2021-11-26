#include <stdio.h>

int main()
{
    for (int i = 1000; i; i--)
    // Here 'i' is true cause every non zero value is true in C. Since the value of 'i' is not equal to 0, the loop will not executes the code.
    {
        printf("The value of i is: %d\n", i);
    }

    return 0;
}