/* An array's memory can't be incremented after initializing. It just takes some bytes from the memory and after the end of the memory, there will store another value to the next location of the memory, so if we want to increase the memory, we can't do that cause there are already some memory has reserverd after the array's location. So when a programm is running, and we want to increase our storage, we need to allocate the memory dynamically. And the concept of Dynamic Memory Allocation (DMA) is widely used in DSA. There are 4 methods that is used in DMA.
1. malloc()
2. calloc()
3. free()
4. realloc()
*/

#include <stdio.h>

int main()
{

    return 0;
}