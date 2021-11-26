#include <stdio.h>

int main()
{
    int marks[3] = {23, 54, 87};
    for (int i = 0; i < 3; i++)
    {
        printf("The marks scored by student %d is: %d\n", i + 1, marks[i]);
    }
    return 0;
}