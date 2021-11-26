#include <stdio.h>
sum(int);

int main()
{
    int n;
    printf("Enter the vlaue of n: ");
    scanf("%d", &n);
    printf("Sum of the first %d natural number is: %d", n, sum(n));
    return 0;
}

sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n + sum(n - 1);
}