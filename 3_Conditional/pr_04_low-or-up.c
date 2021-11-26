#include <stdio.h>

int main()
{
    char character;
    printf("Enter the character you want to check if it is Uppercase or lowercase: ");
    scanf("%c", &character);
    if (character >= 65 && character <= 96)
    // This is actually called ASCII.
    {
        printf("The character is a uppercase character");
    }
    else if (character >= 97 && character <= 122)
    {
        printf("The character is lowercase character");
    }
    else
    {
        printf("The character you have entered is not a character. So input a character");
    }
    return 0;
}