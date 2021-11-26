#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year you want to check if it is a leap year: ");
    scanf("%d", &year);
    if (year % 100 != 0 && year % 4 == 0 && year % 400 != 0)
    // The formula was taken from NASA.
    {
        printf("This is a leap year");
    }
    else
    {
        printf("This is not a leap year. It's just a common year.");
    }
    return 0;
}