#include <stdio.h>

int main()
{
    char ch1[8];
    printf("Enter your name please: ");
    gets(ch1);                                                   // gets is nothing but scanf() function. It just take char type input from the user
    printf("Hey %s, Welcome to the world of Programming.", ch1); // Here %s is basically defining the format of string
    // printf("\nDone printing string\n");
    puts(ch1); // Here puts is basically like printf() funciton but it just give a \n to the variable
    printf("Done printing string.");
    return 0;
}