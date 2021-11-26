#include <stdio.h>
            // Time Stamp: 3:36:10
int main()
{    
    int i;
    printf("Enter the number you want to print to the first natural number: ");
    scanf("%d", &i);

    while (i) // Yeah, we could write that (i >= 0), but as we learned before that any non zero value is true so we just have written (i).
    {
        printf("The natural number is: %d\n", i);
        i--;
    }
// We wasn't able to solve this problem cause we had used a for loop here. And a for loop can't have the value of a variable that is defined outside the loop. So we get success by using while loop here.
    return 0;
}