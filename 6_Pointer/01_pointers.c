#include <stdio.h>
// We have seen that there are 4 types of variable in C. But there is another type of variable that is called 'pointers'. The other 4 variables store some kind of value. But pointers store the location/address of other variable in memory/ram.
// To identify variables as pointers, we use %u format specifier. And we have to indicate the integer we want to get it's address to the pointer. To indicate it, we use '&' operator, just like we had gotten input from user and indicated it to a specific integer variable.
// To get the location of a variable, we use '&' operator, but to identify vlaue of an address in memory, we use * operator.

int main()
{
    int i = 69;
    int j = 7;
    printf("The address of i and j is %u and %u\n", &i, &j);   // & means address of
    printf("The value of i and j is %d and %d", *(&i), *(&j)); // * decodes the address and gives the value
    return 0;
}