#include <stdio.h>
#include <malloc.h>
// Create an array of multiplication table of 6 upto 10 (7 X 10 = 10). Use reallco to make it store 20 numbers (from 7 X 1 = 7 to 7 X 15)

int main()
{
    int *arr;
    arr = (int *)malloc(10 * sizeof(int));
    // Now we can put 10 values to the array arr.

    for (int i = 0; i < 10; i++)
    {
        arr[i] = 7 * (i + 1);
        printf("%d X %d = %d\n", 7, i + 1, arr[i]);
    }

    printf("\nAfter incrementing the capacity of arr using realloc, the next 10 values of the multiplication table is-\n\n");

    arr = (int *)realloc(arr, 20 * sizeof(int));
    // Now we can put 20 values to the array arr.
    for (int i = 10; i < 20; i++)
    {
        arr[i] = 7 * (i + 1);
        printf("%d X %d = %d\n", 7, i + 1, arr[i]);
    }
    
    return 0;
}