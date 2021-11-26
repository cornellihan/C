#include <stdio.h>
#include <string.h>

struct employee
{
    char name[100];
    int age;
    int salary;
};

int main()
{
    struct employee NonSolid[10];
    strcpy(NonSolid[0].name, "Mushfiq");
    NonSolid[0].age = 17;
    NonSolid[0].salary = 243;

    printf("The name of the employee is: %s\n", NonSolid[0].name);
    printf("The age of the employee is %d\n", NonSolid[0].age);
    printf("The salary of the employee is %d$.\n", NonSolid[0].salary);

    return 0;
}