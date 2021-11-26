#include <stdio.h>

int main()
{
    printf("***************Getting the farenheit value of celcius temperature***************\n");
    int c;
    printf("Enter the value of temperature in celcius: ");
    scanf("%d", &c);
    float f = (c * 9.0 / 5) + 32;
    printf("The value of temperature in farenheit is %f", f);
    return 0;
}