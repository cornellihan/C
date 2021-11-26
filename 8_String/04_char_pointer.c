#include <stdio.h>
// The value of a string variable can't reinitialize.
// But a string defined using pointer can be reinitialize.

int main()
{
    char *name[23] = "Mushfiq";
    puts(*name);
    // printf("Enter your name if you want to change the string: ");
    // gets(name);
    // puts(name);

    return 0;
}