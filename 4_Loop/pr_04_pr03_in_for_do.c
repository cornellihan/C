#include <stdio.h>
// Solve the previous problem in for loop and do-while loop.

int main()
{
    int a = 0;
    for (int i = 0; i <= 10; i++)
    {
        a += i;
    }
    printf("The sum of first 10 natural number in for loop is: %d\n", a);

    int b = 0;
    int j = 0;
    do
    {
        b += j;
        j++;
    } while (j <= 10);
    printf("The sum of first 10 natural number in do while loop is: %d\n", a);

    return 0;
}