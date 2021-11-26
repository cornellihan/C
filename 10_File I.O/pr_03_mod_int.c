// Write a programm to modify a file containing an integer to 2x it's value.
#include <stdio.h>

int main()
{
    FILE *ptr;
    // ************* Reading File *************
    ptr = fopen("03_.txt", "r");
    int n;
    fscanf(ptr, "%d", &n);

    // ************* Writing File *************
    ptr = fopen("03_file.txt", "w");
    fprintf(ptr, "%d", n * 2);

    return 0;
}