#include <stdio.h>
#include <string.h>

struct employee
{
    char name[100];
    int age;
};

int main()
{
    struct employee Lihan;

    struct employee *Mushfiq = &Lihan;
    strcpy(Mushfiq->name, "Lihan");
    Mushfiq->age = 17; // (*Mushfiq).age = 17;

    // Here the arrow operator is nothing but the member access operator which is used normally. It's dereferences the pointer at first and give it's value. just like- (*Mushfiq).age = 17. But NOTE that a pointer can't have a structure, it must depend on other initialized structure. Like-      struct employee *Mushfiq = &Lihan;

    printf("The name of the employee Lihan is %s\n", Mushfiq->name); // (*Mushfiq).name
    printf("The age  of the employee Lihan is %d\n", Mushfiq->age);  // (*Mushfiq).age

    return 0;
}