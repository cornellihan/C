#include <stdio.h>
#include <math.h>   // To call the funtion pow(), we need to include the library called <math.h>
int main()
{
    double a;
    printf("Enter the height of the square: ");
    scanf("%lf", &a);
    printf("The area of the square is: %lf", pow(a, 2));
    return 0;
}