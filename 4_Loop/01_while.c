#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 100)
    {
        printf("The value of i is: %d\n", i);
        // i = i + 1    // This is called compound Assignment Operator. Just like -=, *=, /=, %=
        // i += 1
        i++;            // This is called Increment Operator.
    }
    return 0;
}