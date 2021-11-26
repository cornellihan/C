#include <stdio.h>
#include <string.h>
// typedef keyword is basically used before the starting of a structure. And after using it, we don't have to write the 'struct' keyword everytime before we use the structure. And we don't even have to write the name of the structure. But for that we need to give a name before the structure ends.

typedef struct employee
{
    char name[100];
    int age;
    int salary;
} Employee;

int main()
{
    Employee Company = {"Muhammad Mushfiqur Rahman", 29, 10000};

    printf("The name of the employee is: %s\n", Company.name);
    printf("The age of the employee is %d\n", Company.age);
    printf("The salary of the employee is %d$.\n", Company.salary);

    return 0;
}