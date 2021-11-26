#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number you want to check if it is prime number or not: ");
    scanf("%d", &number);

    int i = 2;
    while (i < number)
    {
        if (i < number && number % i == 0)
        {
            printf("%d is devided by %d\n", number, i);
        }
        else if (i == number)
        {
            printf("%d is a prime number.", number);
        }
        i++;
    }

    return 0;
}