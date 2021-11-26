#include <stdio.h>
#include <string.h>

struct employee
{
    char name[50];
    int age;
    int salary;
};

int main()
{
    struct employee mushfiq = {"Mushfiq", 17, 200};
    // struct employee mushfiq = {0};      => Set all the elements to 0.

    printf("The name of the employee is %s\n", mushfiq.name);
    printf("The age of the employee is %d\n", mushfiq.age);
    printf("The salary of the employee is %d$.\n", mushfiq.salary);

    struct employee *pointer = &mushfiq;

    printf("\nThe name of the employee is %s\n", (*pointer).name);
    printf("The age of the employee is %d\n", (*pointer).age);
    printf("The salary of the employee is %d$.\n", (*pointer).salary);

    return 0;
}

// In this type of initialization, it won't work when we use any array to the name of the structure like- struct employee NonSolid[0]