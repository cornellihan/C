#include <stdio.h>
// Create a programm that can take students marks and give them the grade.

int main()
{
    int a;
    printf("Press 1 and enter if your mark is between 60-69.\n");
    printf("Press 2 and enter if your mark is between 70-79.\n");
    printf("Press 3 and enter if your mark is between 80-89.\n");
    printf("Press 4 and enter if your mark is between 90-100.\n");
    printf("Enter the number of which grade you want to know: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("Your grade is D");
        break;
    case 2:
        printf("Your grade is C");
        break;
    case 3:
        printf("Your grade is B");
        break;
    case 4:
        printf("Your grade is A");
        break;
    default:
        printf("Well if you are not sure which one you should tap and press enter, then we have another program to find your grade.\n");
        printf("Enter your marks: ");
        scanf("%d", &a);
        if (a >= 60 && a < 70)
        {
            printf("Your grade is A");
        }
        else if (a >= 70 && a < 80)
        {
            printf("Your grade is C");
        }
        else if (a >= 80 && a < 90)
        {
            printf("Your grade is B");
        }
        else if (a >= 90 && a <= 100)
        {
            printf("Your grade is A");
        }
        else
        {
            printf("Your result is not valid. Thank You.");
        }
        break;
    }
    return 0;
}