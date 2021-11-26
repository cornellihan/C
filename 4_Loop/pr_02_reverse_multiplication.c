#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number you want to get the multiplication table reversely:  ");
    scanf("%d", &a);

    for (int i = 10; i; i--)
    {
        printf("%d X %d = %d\n", a, i, a * i);
    }
    // Time Stamp: 3:55:55 (do-while loop)
    return 0;
}