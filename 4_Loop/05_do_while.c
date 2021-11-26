#include <stdio.h>
// The main defference between While Loop and Do-While Loop is while loop first check the conditions are true or false. Then if the condition is true, then it executes the code. On the other hand, do while loop first executes the code, then check if the conditions are true or false.

int main()
{
    int i = 7;
    do
    {
        printf("The value of i is: %d", i);
    } while (i < 5);
    return 0;
}