#include <stdio.h>

// Switch-Case statement can only work with the instruction of number.

int main()
{
    int age = 25;
    printf("Enter a number between 24 to 28: ");
    scanf("%d", &age);
    switch (age)
    {
    case 24:
        printf("You are 24 years old.");
        break;
    case 25:
        printf("You are 25 years old.");
        break;
    case 26:
        printf("You are 26 years old.");
        break;
    case 27:
        printf("You are 27 years old.");
        break;
    case 28:
        printf("You are 28 years old.");
        break;
    default:
        printf("It says to give a number between 24 to 28");
        break;
    }
    return 0;
}