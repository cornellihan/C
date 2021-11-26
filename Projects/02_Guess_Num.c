#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    // Time Stamp: 5:31:00
int main()
{
    int number, guess, nGuess = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("Hey, you have to guess a number between 1 to 100. You don't need to guess it in one attempt. So let's play this game.\n");
    do
    {
        printf("Enter the number you have guessed: ");
        scanf("%d", &guess);
        if (number < guess)
        {
            printf("Lower number please. \n");
        }
        else if (number > guess)
        {
            printf("Greater number please. \n");
        }
        else
        {
            printf("\nYayy, you got it. \nYou took %d attempts to guess the number.", nGuess);
        }
        nGuess++;
    } while (number != guess);
    scanf("%d", &number); // Have a relax, this is just if the app completes all the tasks, then it just exit by itself :(
    return 0;
}