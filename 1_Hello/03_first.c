#include <stdio.h>
int main()
{
    // I want to write code to read the user mic
    printf("Hello World!\n");
    printf("I am learning C with Harry\n");

    // Now lets play with some variables
    /* There are 4 types of variable in C.
    1. Integer Variable(int)
    2. Real Variable(float and also double)
    3. Character Variable(char)
    */
    int a = 3;      // To define a variable as an integer, we have to define it with int keyword.
    float b = 3.2;  // To define a variable as a floating point, we have to define it with float keyword.
    char c = 'l';   // To define a variable as a character, we have to define it with char keyword.
    double d = 3.3; // To define a variable as a double, we have to define it with double keyword.

    printf("This is an integer: %d\n", a);       // To print a variable as an integer, the format specifier is %d
    printf("This is a floating point: %f\n", b); // To print a variable as a floating point, the format specifier is %f
    printf("This is a character: %c\n", c);      // To print a variable as a character, the format specifier is %c
    printf("This is a double: %lf\n", d);        // To print a variable as a double, the format specifier is %lf
    return 0;
}