#include <stdio.h>
// Multi Dimensional Array

int main()
{
    /*  int marks[2][4];
    int marks[0][0] = 63;
    int marks[0][1] = 44;
    int marks[0][2] = 58;
    int marks[0][3] = 98;

    int marks[1][0] = 24;
    int marks[1][1] = 38;
    int marks[1][2] = 48;
    int marks[1][3] = 85;
    */
    int marks[2][4] = {
        {54, 22, 32, 23},
        {34, 32, 34, 34}};

    for (int i = 0; i < 2; i++) // For row
    {
        for (int j = 0; j < 4; j++) // For Columns
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}