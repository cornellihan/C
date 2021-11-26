#include <stdio.h>

int main()
{
    printf("***************Getting the area and volum of a cylinder***************\n");
    int r;
    printf("Enter the radius of the cylinder: ");
    scanf("%d", &r);
    printf("The area of the cylinder is %f\n", 3.1416 * r);
    int h;
    printf("Enter the height of the cylinder: ");
    scanf("%d", &r);
    printf("The volume of the cylinder is %f", 3.1416 * r * h);
    return 0;
}