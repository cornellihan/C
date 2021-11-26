#include <stdio.h>
// Can you pass a structure to a function..?

struct employee
{
    char name[100];
    int age;
    int salary;
};

void lol(struct employee *e1)
{
    printf("The name of the employee is %s\n", e1->name);
    printf("The age of the employee is %d\n", e1->age);
    printf("The salary of the employee is %d$\n", e1->salary);
    e1->salary = 300;
    // So if we use functions with pass by value, then the value is not gonna be change after incrementing, but if we use pass by reference, then the value is absolutely gonna be changed.
}

int main()
{
    struct employee mushfiq = {"Mushfiq", 17, 200};
    lol(&mushfiq);
    printf("\nThe salary of %s after the function run is %d$", mushfiq.name, mushfiq.salary);

    return 0;
}