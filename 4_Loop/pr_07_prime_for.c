#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number you want to check if it is a prime number or not: ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("The number is divisible by %d\n", i);
            // break;
        }
        else
        {
            printf("The number is not divisible by %d.\n", i);
        }
    }

    return 0;
}