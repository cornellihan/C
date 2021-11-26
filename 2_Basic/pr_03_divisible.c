#include <stdio.h>

int main()
{
    int a;
    printf("Enter the divisible: %d\n");
    scanf("%d", &a);

    int b;
    printf("Enter the divisor: %d\n");
    scanf("%d", &b);
    
    printf("The remainder is: %d", a % b);
    return 0;
}