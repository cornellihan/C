#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number you want to check if it is a prime number or not: ");
    scanf("%d", &n);
    int primeNumber = 1;
    int i = 2;

    while (i < n)
    {
        if (n % i == 0)
        {
            primeNumber = 0;
            break;
        }
        else
        {
            i++;
        }
    }

    if (primeNumber)
    {
        printf("Your number is a prime number.");
    }
    else
    {
        printf("Your number is not a prime number");
    }

    return 0;
}