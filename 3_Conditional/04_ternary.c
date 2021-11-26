#include <stdio.h>

int main()
{
    // There are some Logical Operators that is also known as Ternary Operators
    // And they are '?' and ':'

    int a = 6;
    int b = 6;
    int c;
    c = (a == b) ? 1 : 0;
    (c == 1) ? printf("The Ternary Operator works fine as short form of if-else condition") : printf("The Ternary Operator is not working fine.");
    return 0;
}