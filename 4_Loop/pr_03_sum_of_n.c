#include <stdio.h>
// Get the sum of nth natural number using while loop.

int main()
{
    int a = 0;
    // printf("Enter the value of n: ");
    // scanf("%d", &a);
    int i = 0;
    while (i <= 10)
    {
        a += i; // a = a + i
        i++;
    }

    printf("The sum of first 10 natural number is: %d\n", a);
    return 0;
}