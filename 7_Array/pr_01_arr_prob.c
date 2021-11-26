#include <stdio.h>

int main()
{
    int arr[10];
    arr[0] = 23;
    arr[1] = 84;
    arr[2] = 65;
    arr[3] = 14;

    int *ptr = arr; // int * ptr = &arr[0]
    printf("The value of ptr is: %d\n", *ptr);

    ptr = ptr + 2; // This won't increase the value of the location. This will just move to the next 2 index of array.
    printf("The value of ptr is: %d\n", *ptr);
    
    return 0;
}