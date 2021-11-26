#include <stdio.h>

int main()
{
    // What is a factorial?
    // n! = 1 * 2 * 3 * ...* n
    // 4! = 1 * 2 * 3 * 4
    // 0! = 1 (By Definition)

    int factorial = 1;
    int n;
    printf("Enter the number you want to do factorial: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("The value of factorial is: %d\n", factorial);

    int product = 1;
    int number = 4;
    int j = 1;
    while (j <= number)
    {
        product = product * j;
        j++;
    }
    printf("The value of factorial is: %d", product);
    // Time: 4:06:29
    return 0;
}