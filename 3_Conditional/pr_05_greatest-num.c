#include <stdio.h>

int main()
{
    int a;
    printf("Enter the first number: ");
    scanf("%d", &a);
    int b;
    printf("Enter the second number: ");
    scanf("%d", &b);
    int c;
    printf("Enter the third number: ");
    scanf("%d", &c);
    int d;
    printf("Enter the fourth number: ");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("The greatest number is %d", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("The greatest number is %d", b);
    }
    else if (c > b && c > a && c > d)
    {
        printf("The greatest number is %d", c);
    }
    else if (d > b && d > c && d > a)
    {
        printf("The greatest number is %d", d);
    }
    else
    {
        printf("The greatest number has entered multiple times");
    }

    return 0;
}