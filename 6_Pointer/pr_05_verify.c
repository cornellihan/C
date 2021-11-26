#include <stdio.h>
// Veryfy that the problem of practise set 2 with the function of Call By Variable is not working properly

void change(int);
int main()
{
    int i = 69999;
    printf("The vlaue of i before the fucntion call is: %d\n", i);
    change(i);
    printf("The vlaue of i after the fucntion call is: %d\n", i);
    
    return 0;
}

void change(int number)
{
    number = number * 10;
}

// Time Stamp: 6:40:50