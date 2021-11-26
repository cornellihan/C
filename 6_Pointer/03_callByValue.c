#include <stdio.h>
int sum(int, int);
/* Based on the way we pass arguments to the funciton, function calls are 2 types.
    1. Call By Value        => This will pass the value
    2. Call By Reference    => This will pass the address
*/

int main()
{
    int x = 4;
    int y = 15;
    printf("The value of x + y is: %d\n", sum(x, y));
    printf("The value of x and y is %d and %d\n", x, y);
    return 0;
}

int sum(int a, int b)
{
    a = 56;
    return a + b;
}

// Here 'x' is not working properly. Because 'x' argument's value will be copid first. Then another byte will be created on ram for 'a' parameter. And on that byte (a parameter), the value of 'x' will be pasted. But when 'a' is already defined from a function, then it's value is not gonna change when the function is called. So the value of 'x' won't pass to 'a'