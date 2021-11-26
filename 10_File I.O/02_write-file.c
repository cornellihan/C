#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("writeFile.txt", "w");
    // Here the 'w' mode is to write on the file.
    int i = 69;
    fprintf(ptr, "%d", i);
    // Now here we have just written on this file using fprint() function.
    fclose(ptr);

    return 0;
}