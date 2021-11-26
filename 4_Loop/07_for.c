#include <stdio.h>
// A for loop's inside defined variable has no relation with the variable that is defined outside the loop. If we want to pass any predefined variable to a for loop, or want to pass the variable outside the loop, then we have to use while loop instead of for loop.

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("Hey, now what you are seeing, it is made by a for loop program: %d\n", i);
    }
    
    return 0;
}