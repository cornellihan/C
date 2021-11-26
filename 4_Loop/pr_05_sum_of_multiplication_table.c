#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum += i * 9;
    }
        printf("The sum of multiplication table is: %d\n", sum);
    return 0;
}