// The memory allocated using calloc/malloc is not deallocated automatically.
#include <stdio.h>
#include <malloc.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(30 * sizeof(int));
    free(ptr);
    // Okay, so we can't use free after initializing the values to the ptr, but still if we want to deallocate the memory, then we can use it.
    ptr[0] = 34;
    ptr[1] = 874;
    ptr[2] = 45;
    ptr[3] = 87;
    ptr[4] = 23;
    printf(" Before we deallocate our memory, the value of ptr[4] is: %d\n", ptr[4]);
    free(ptr);  // Now this will just deallocate all the memory that is allocated by ptr.
    printf(" After  we deallocate our memory, the value of ptr[4] is: %d\n", ptr[4]);
    
    return 0;
}