#include <stdio.h>
// In the previous lesson, we can notice that we can't give any string with spaces. And when we give multi word string, the console just through an error or the programm doesn't work properly. But there is another method to give and get multi word string without any error or incomplecity.

int main()
{
    char fullName[24];
    printf("Enter your name please: ");
    gets(fullName);
    // gets is nothing but scanf() function. It just take char type input from the user

    printf("Hey %s, Welcome to the world of Programming.", fullName);
    // Here %s is basically defining the format of string.

    puts(fullName);
    // Here puts is basically like printf() funciton but it also prints a new line after the string is printed.
    printf(fullName);

    return 0;
}