#include <stdio.h>
#include <malloc.h>
// Solve problem 1 using calloc.

int main()
{
    int *ptr;
    ptr = (int *)calloc(6, sizeof(int));
    ptr[0] = 12;
    ptr[1] = 842;
    ptr[2] = 154;
    ptr[3] = 504;
    ptr[4] = 1;
    ptr[5] = 8466;
    
    printf("The value of index 0 is: %d\n", ptr[0]);
    printf("The value of index 1 is: %d\n", ptr[1]);
    printf("The value of index 2 is: %d\n", ptr[2]);
    printf("The value of index 3 is: %d\n", ptr[3]);
    printf("The value of index 4 is: %d\n", ptr[4]);
    printf("The value of index 5 is: %d\n", ptr[5]);

    return 0;
}