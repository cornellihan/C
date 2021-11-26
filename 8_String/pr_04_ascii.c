#include <stdio.h>
#include <string.h>
// Increment the ASCII value of every character in your string and print.

int main()
{
    char name[] = "Muhammad_Mushfiqur_Rahman";
    printf("The name before Encryption is: %s\n", name);

    for (int i = 0; i < strlen(name); i++)
    {
        name[i]++;
    }
    printf("The name after  Encryption is: %s\n", name);
    printf("You know, this is an example of Encryption. Although the Encryption was not safe enough, but that was also one kind of Encryption :D");

    return 0;
}