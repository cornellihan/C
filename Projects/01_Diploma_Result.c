#include <stdio.h>

int main()
{
    printf("Hey, welcome to this calculator program where you can calculate your entier 8 semesters result.\n");
    float a, b, c, d, e, f, g, h;
    printf("Enter your result of 1st semester: ");
    scanf("%f", &a);
    a = a * 0.05;
    printf("Enter your result of 2nd semester: ");
    scanf("%f", &b);
    b = b * 0.05;
    printf("Enter your result of 3rd semester: ");
    scanf("%f", &c);
    c = c * 0.05;
    printf("Enter your result of 4th semester: ");
    scanf("%f", &d);
    d = d * 0.1;
    printf("Enter your result of 5th semester: ");
    scanf("%f", &e);
    e = e * 0.15;
    printf("Enter your result of 6th semester: ");
    scanf("%f", &f);
    f = f * 0.2;
    printf("Enter your result of 7th semester: ");
    scanf("%f", &g);
    g = g * 0.25;
    printf("Enter your result of 8th semester: ");
    scanf("%f", &h);
    h = h * 0.15;
    float total = a + b + c + d + e + f + g + h;
    printf("Your total result is %f\n", total);

    int lol;
    printf("Thanks for using this Calculator. Press 'Q' and tap 'Enter' to exit the program\n");
    scanf("%d", &lol);
    return 0;
}