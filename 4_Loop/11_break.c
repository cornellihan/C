#include <stdio.h>
// Time Stamp: 3:42:19 (Deawing)
int main()
{
    for (int i = 0; i < 10; i++)
    {
        // printf("The value of i is: %d\n", i);
        if (i == 6)
        {
            break;
        }
        printf("The value of i is: %d\n", i);
    }
    printf("The loop is ended.");
    return 0;
}