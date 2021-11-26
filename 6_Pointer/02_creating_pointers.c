#include <stdio.h>

int main()
{
    int i = 7;
    int *j = &i; // This type is called pointer to an integer.
    printf("The address of i is %u\n", &i);
    printf("The address of i is %d\n", j);
    printf("The value of i is %d\n", i);
    printf("The value of i is %u\n", *j);

    // Hey, remember that while a variable stores another variable's address, it also has it's own address. But if we just said printf("address of i is %u", &i), then there was no need to declare another variable and there was no address of it.
    printf("The address of j is %u\n", &j);

    /* There is something wrong with my pointer to pointer integer type variable
        int **k = &j;
        printf("The value of k is %u\n", **k);
    */

        return 0;
}

/* Just like pointer of type integer, we also have pointers of char, float, etc.
    int *poiner-to-integer
    char *poiner-to-character
    float *poiner-to-float
*/