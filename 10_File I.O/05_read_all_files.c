#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("fgetc_fputc.txt", "r");
    char ch;

    while (ch != EOF)
    {
        ch = fgetc(ptr);
        if(ch != EOF)
            printf("%c", ch);
    }

    fclose(ptr);
    return 0;
}