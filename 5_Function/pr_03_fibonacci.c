#include <stdio.h>
int fibonacci(int);

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The element %d of fibonacci series is: %d", n, fibonacci(n));
    return 0;
}

int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}