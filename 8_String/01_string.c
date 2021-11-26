#include <stdio.h>
// String is actually takes characters, so as character takes one byte of memory, so String also takes only 1 byte of memory.

int main()
{
    // Every string is an array of char variable
    // char myChar[8] = {'M', 'u', 's', 'h', 'f', 'i', 'q', '\0'};
    // char myChar[] = {'M', 'u', 's', 'h', 'f', 'i', 'q', '\0'};
    // char myChar[8] = "Mushfiq";
    char myChar[] = "Mushfiq";
    printf("%s\n", myChar);

    // Initializing String:-
    char demo[] = "Muhammad Mushfiqur Rahman";
    printf("%s\n", demo);
    // %s is the format specifier of string data type.

    return 0;
}