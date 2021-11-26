#include <stdio.h>

int main()
{
    printf("***************Getting the area of a rectangular***************\n");
    int a;
    int b;
    printf("Enter the length of the rectangular\n");
    scanf("%d", &a);
    printf("Enter the breadth of the rectangular\n");
    scanf("%d", &b);
    printf("The area of the rectangular is %d", a * b);
    return 0;
}