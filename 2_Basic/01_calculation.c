#include <stdio.h>

int main()
{
    // Defining a variable as a float or integer or character is actually "Type Declaration" Instruction.

    int a = 30 / 9;
    printf("The value of a is %d\n", a);
    // Well, the answer should be 3.33333..... But it won't happen. Cause an integer variable can't ever keep a floating point's value.

    float b = 30 / 9;
    printf("The value of b is %f\n", b);
    // Here the result should show 3.33333..... But it again won't happen. Casue here 30 is defined as an integer number And a float can't also keep an integer constant.

    float c = 30.0 / 9;
    printf("The value of c is %f", c);
    return 0;
    // Now here the result will show 3.333333 cause here the variable is a floating point and the constant is also defined as a float by giving .0 at the end of the number
}