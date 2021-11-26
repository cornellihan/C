#include <stdio.h>
// Structure is a user defined data type that is a collection of variables. It can have any type of data.

struct employee
{
    char name[100];
    float age;
    int salary;
};
int main()
{
    struct employee mushfiq;
    // mushfiq.name = "Mushfiq";
    // Here this is throwing an error cause it says to give the first index's value but we just gave it a full string which is not fair. In that case, we can use strcpy() function to copy any string to the variable.

    printf("Enter your Name: ");
    gets(mushfiq.name);
    // But when we takes input from the user, then it works cause then it just tells to give the string and takes it's full length. I don't know why :)

    printf("Enter your age: ");
    scanf("%f", &mushfiq.age);

    mushfiq.salary = 100;
    printf("Your name is %s and you are %f years old. Now you are going to get a %d$ salary.", mushfiq.name, mushfiq.age, mushfiq.salary);

    return 0;
}