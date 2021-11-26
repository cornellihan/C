#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number you want to get the multiplication table: ");
    scanf("%d", &a);

    int i = 1;
    while (i <= 100)
    {
        printf("%d X %d = %d\n", a, i, a * i);
        i++;
    }

    return 0;
}