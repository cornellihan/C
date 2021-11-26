// Write a programm to create an array of size n using calloc where n is an integer entered by the user.
#include <stdio.h>
#include <malloc.h>

// calloc() stands for Contiguous Memory.
int main()
{
    int n;
    printf("Enter the size of your array: ");
    scanf("%d", &n);

    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    ptr[0] = 34;
    ptr[1] = 874;
    ptr[2] = 45;
    ptr[3] = 87;
    ptr[4] = 23;
    printf("%d\n", ptr[2]);
    // If we didn't give the value to any index's, then it will print 0. Cause by default, every block of calloc is initialized as 0. Like-
    printf("The value of ptr[5] is: %d", ptr[5]);

    return 0;
}