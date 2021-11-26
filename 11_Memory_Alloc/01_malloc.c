#include <stdio.h>
#include <malloc.h>
// We need to include this <malloc.h> to use malloc.

int main()
{
    int *ptr;
    ptr = (int *)malloc(30 * sizeof(int));
    // Here malloc is basically heaping the size of 30 integers in the memory. And by the int*, ptr is holding all the locations. So if the location of ptr is just 32-36, then it will become 32-(30*4). So that means if our array needs extra memory, we can provide by heaping the memory using malloc. By this, we can also say that-
    int n = 2;
    // scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));

    ptr[0] = 34;
    ptr[1] = 874;
    ptr[2] = 45;
    ptr[3] = 87;
    ptr[4] = 23;
    printf("%d", ptr[4]);

    return 0;
}