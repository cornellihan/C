#include <stdio.h>

int main()
{
    int income;
    float tax;
    printf("Enter your income: ");
    scanf("%d", &income);
    if (income < 250000)    // 2.5 Lakhs
    {
        printf("Your don't have to give any tax until your income is 250000");
    }
    else if (income >= 250000)
    {
        float tax = (income - 250000) * 0.05;
        printf("Your tax is around %f", tax);
    }
    else if (income >= 500000)  // 5 Lakhs
    {
        float tax = (income - 500000) * 0.2;
        printf("Your tax is around %f", tax);
    }
    else if (income >= 1000000) // 10 Lakhs
    {
        float tax = (income - 100000) * 0.3;
        printf("Your tax is around %f", tax);
    }
    return 0;
}