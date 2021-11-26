#include <stdio.h>
// Solve the 6th programm using for loop.
    // Time Stamp: 3:31:45
int main()
{
    int a;
    printf("Enter the number you want to print from the first natural number: ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        printf("The natural number is: %d\n", i);
    }
    
    return 0;
}