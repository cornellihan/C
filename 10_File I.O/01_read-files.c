#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("samplefile.txt", "r");
    // We have just passed the location of 'samplefile.txt' to 'ptr' and gave it a mode of "r" that is used to read a file.

    char ch;
    // char ch = fscanf(ptr)
    fscanf(ptr, "%c", &ch);
    // We have just passed the first character to 'ch'. And we find the location of the file from ptr. And to pass the value in this case, we have to use fscanf() function.

    printf("The first letter in the text file is: %c", ch);
    fclose(ptr);
    // Now here we are just telling the OS that we have done our work with this file and we don't need to hold the file anymore.

    return 0;
}