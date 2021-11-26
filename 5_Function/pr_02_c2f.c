#include <stdio.h>
float c2f(float);
// ********************    Function Prototype    ********************

int main()
{
    float s;
    printf("Enter the value of Celcius: ");
    scanf("%f", &s);
    float l = c2f(s);
    printf("The value of %f degree Celcius in Fahrenheit is: %f", s, l);
    return 0;
}

// ********************    Function Body    ********************
float c2f(float c)
{
    float f = (c * 9 / 5.0) + 32;
    return f;
}