#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("Hey, this is a Rock Paper Scissor game coded in C language. So here you have to input 'r' for Rock, 'p' for Paper and 's' for Scissor. And on the other hand, the computer will also choose an option, and you will get the result at the moment. Happy Playing ;)\n");

    char You, Computer;
    printf("Enter your choice: ");
    scanf("%c", &You);

    // ****************************  Giving a choice to the Computer.  ****************************
    srand(time(0));
    int randNum = rand() % 100 + 1;
    if (randNum < 34)
    {
        Computer = 'r';
    }
    else if (randNum < 67)
    {
        Computer = 'p';
    }
    else
    {
        Computer = 's';
    }

    // ****************************  Getting the final result.  ****************************
    if (You == Computer)
    {
        printf("The game was DRAW\n");
    }
    else if ((Computer == 'r' && You == 'p') || (Computer == 'p' && You == 's') || (Computer == 's' && You == 'r'))
    {
        printf("You WIN.\n");
    }
    else if ((You == 'r' && Computer == 'p') || (You == 'p' && Computer == 's') || (You == 's' && Computer == 'r'))
    {
        printf("You LOOSE.\n");
    }
    else
    {
        printf("It says to just input 'r' or 'p' or 's'. No other letter is allowed.\n");
    }
    printf("You had choosen %c and the Computer had choosen %c", You, Computer);

    return 0;
}