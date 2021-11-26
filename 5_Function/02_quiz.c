#include <stdio.h>
// When we want to return any int type, then the function will be start as int and when we want to return any string type, then the function will be start as string, and that continues. But when we don't have anything to return or that is not specified that which data type will return, then we just simply use void.
void goodMorning();
void goodAfternoon();
void goodNight();

int main()
{

    goodMorning();
    goodAfternoon();
    goodNight();
    return 0;
}

void goodMorning()
{
    printf("Good Morning.\n");
}
void goodAfternoon()
{
    printf("Good Afternoon.\n");
}
void goodNight()
{
    printf("Good Night.\n");
}

/* Notes:
    1. Every function gets called by directly or indirectly from main()
    2. There are 2 types of function in C. Library Function(That is inbuild by C just like main() and pow()) & Custom Function/User defined function(That we make for a particular task)
*/