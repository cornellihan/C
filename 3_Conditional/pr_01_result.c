#include <stdio.h>

int main()
{
    int mark1, mark2, mark3;
    printf("Enter the result of mark1: ");
    scanf("%d", &mark1);
    printf("Enter the result of mark2: ");
    scanf("%d", &mark2);
    printf("Enter the result of mark3: ");
    scanf("%d", &mark3);
    float total = (mark1 + mark2 + mark3) / 3;
    if (total >= 40)
    {
        if (mark1 >= 33 && mark2 >= 33 && mark3 >= 33)
        {
            printf("Cngrats. You have passed the exam.");
        }
        else
        {
            printf("Sorry dude, you have at least 40 marks of each subject on avarage but you don't have at least 33 in at least one subject individually. So you have failed :(");
        }
    }
    else
    {
        printf("Hey maaan, you don't even have 40 marks on each subject on avarage. How can you expect to be passed...");
    }
    return 0;
}