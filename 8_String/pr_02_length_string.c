#include <stdio.h>
// Solve problem 1 using pointer.

int strLength(char *str)
{
    int length = 0;
    while (*str != '\0')
    {
        str++;
        length++;
    }
    return length;
}

int main()
{
    char string[100];
    printf("Enter any string you want: ");
    gets(string);
    printf("The length of the string you have given is %d", strLength(string));

    return 0;
}