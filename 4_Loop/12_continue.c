#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 6)
        {
            continue;   // As break means the operation will stop from there, but continue won't do that. It will just stop that  statement but after that every statement will be executeed.
        }
        printf("The value of i is: %d\n", i);
        // Here is a thing to notice. If the break/continue statement is written after the printf() function or any other code, then it won't work properly.
        // Cause we give the break/continue statement for stopping/pausing a partiular line of code. And if the code executes before the break/continue statement, then it won't work properly.
        
    }
    return 0;
}