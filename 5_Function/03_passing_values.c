#include <stdio.h>

int sum(int, int);

int main()
{
    int a = 5;
    int b = 7;
    printf("The value of sum() function is: %d", sum(a, b));
    return 0;
}

int sum(int a, int b) // Here a and b is called parameters.
{
    return a + b;
}

/* Notes:
    1. Parameters are the values or variable placeholders in the function definition.
    Ex:
        int example(int a, int b){
            printf("The value of sum is: %d", sum(a, b));
        }            
    2. Arguments are the actual values passed to the function to make a call.
    Ex:
        int main()
        {
            example(4, 5);
        }
    3. If there are 2 same variable in the main function and the custom function(Here the variable is parameter), then it won't affect anything, the custom function's parameter won't error something for the same named variable in the main function.
*/