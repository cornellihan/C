#include <stdio.h>
// Get the length of a string without using strlen() function or <string.h> library.

int main()
{
    char name[] = "Muhammad_Mushfiqur_Rahman";
    int length = 0;
    while (name[length] != '\0')
    {
        length++;
    }
    printf("The length of the string is %d", length);

    return 0;
}