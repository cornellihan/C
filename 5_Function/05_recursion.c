#include <stdio.h>

// factorial(n) = n * n - 1 * n - 2 * n - 3 * n - 4 * ...... * 1
// factorial(5) = 5 * 4 * 3 * 2 * 1
// factorial(1) = 1
// factorial(0) = 1

// factorial(n) = n * n - 1 * n - 2 * n - 3 * n - 4 * ...... * 1
// factorial(n) = n * (n - 1 * n - 2 * n - 3 * n - 4 * ...... * 1)
// factorial(n) = n * factorial(n - 1)

int factorial(int);

int main()
{
    int a;
    printf("Enter the value of n: ");
    scanf("%d", &a);
    printf("The factorial of n is: %d", factorial(a));
    return 0;
}

int factorial(int n)
{
    // When the condition will become true, then it will executes the code. And then the code below the condition won't work.
    if (n == 1 || n == 0) // Here it is called base condition which doesn't call the function any further in a recursive function.
    {
        return 1;
    }
    return n * factorial(n - 1);
    // Here it's just like an invisible else conditon.
}

/* Here is another example:
    int factorial(int n)
    {
        int x;
            if (n == 1 || n == 0)
            {
                return 1;
            }
            else
            {
                x = n * factorial(n - 1);
                return x;
            }
    }
*/

/* Dry run of factorial 4:
    factorial(4)
    4 * factorial(3)
    4 * 3 * factorial(2)
    4 * 3 * 2 * factorial(1)
    4 * 3 * 2 * 1
    24
*/