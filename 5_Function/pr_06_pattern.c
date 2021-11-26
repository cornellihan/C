#include <stdio.h>
int star();

int main()
{
    int s;
    printf("Enter the number of line you want to print the '*': ");
    scanf("%d", &s);
    star(s);

    return 0;
}

int star(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (2 * i + 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}