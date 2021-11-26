#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("fgetc_fputc.txt", "r");
    char ch = fgetc(ptr);
    
    printf("The value of ch is: %c", ch);

    fclose(ptr);
    return 0;
}