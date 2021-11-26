#include <stdio.h>
// Print the natural number from 0 to n by using do-while loop.
    // Time Stamp: 3:24:00
    // Sir I actually can write tth program in a better way, but to keep the int i value = 0, I have written it in this way (3:01:59)
int main()
{
    int i = 0;
    int a;
    printf("Enter the number you want to print from the first natural number: ");
    scanf("%d", &a);
    do
    {
        printf("The natural number is: %d\n", ++i);
    } while (i < a);
    return 0;
}