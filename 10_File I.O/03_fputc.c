#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("fgetc_fputc.txt", "w");
    fputc('I', ptr);
    // Here we are just writing a character to the file  using fputs() function.
    
    char lol[] = "Muhammad Mushfiqur Rahman";
    puts(lol);
    // Here this is a normal puts() funciton.

    fclose(ptr);
    return 0;
}