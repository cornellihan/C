// Create an array of size 3 X 10 containing multiplication table of the numbers 2, 7 and 9 respectively. And also print all of their addresses.
#include <stdio.h>

int main()
{
    int table[3][10];
    int numbers[3] = {3, 7, 9};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            table[i][j] = numbers[i] * (j + 1);
            printf("%d X %d = %d\n", numbers[i], j + 1, table[i][j]);
        }
        printf("\n");
    }

    // Bellow code is to print their address.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%u ", &table[i][j]);
        }
        printf("\n");
    }

    return 0;
}