// Write a programm to read 3 integers from a file.
#include <stdio.h>

int main()
{
    FILE *pointer;
    pointer = fopen("01_.txt", "r");

    int i;
    fscanf(pointer, "%d", &i);
    printf("The value of i is: %d\n", i);
    fscanf(pointer, "%d", &i);
    printf("The value of i is: %d\n", i);
    fscanf(pointer, "%d", &i);
    printf("The value of i is: %d\n", i);

    return 0;
}