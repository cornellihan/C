#include <stdio.h>

int main()
{
    char name[10];
    // In this character type array, we have to declare the length of the array always if we don't initialize it's value on that time.
    printf("Enter your name and see magic.\n");
    scanf("%s", name);
    // And here we don't have to put the '&' operator to give the value to the variable.
    printf("%s", name);

    // In case of loop, when our programm takes inputs of string data type from the user, the programm also takes the 'Enter' key's value and store it to the variable. And to delete the value of 'Enter' from the variable, we need to use a function name fflash(variable_name);

    return 0;
}