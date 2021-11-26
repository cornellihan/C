// Take 2 employee's name and salary1 and write them into a file.
#include <stdio.h>

int main()
{
    // ***************** For Employee 1 *****************
    char name1[10];
    int salary1;
    printf("Enter the name1 of the employee1: ");
    scanf("%s", &name1);
    printf("Enter %s's salary1: ", name1);
    scanf("%d", &salary1);

    // ***************** For Employee 2 *****************
    char name2[10];
    int salary2;
    printf("Enter the name1 of the employee2: ");
    scanf("%s", &name2);
    printf("Enter %s's salary1: ", name2);
    scanf("%d", &salary2);

    // ***************** Writing it on file.txt *****************
    FILE *ptr;
    ptr = fopen("02_.txt", "w");
    fprintf(ptr, "%s, %d\n", name1, salary1);
    fprintf(ptr, "%s, %d\n", name2, salary2);

    fclose(ptr);
    return 0;
}