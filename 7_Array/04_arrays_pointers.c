#include <stdio.h>

int main()
{
    int marks[4] = {6, 23, 43, 1}; // As there will be reserved 4 bytes of memory in ram for an integer, so here 5 bytes will be reserved in ram for this array.
    // &marks[0] => marks       (The address of marks[0] is nothing but marks)
    int *ptr = marks;
    // int *ptr = &marks[0];    This is also valid, cause as we know that the address of '0' index of an array is basically the array itself.
    *ptr = 59;
    ptr++;
    // Pointer Arithmetic will not add 1 to value of that integer. It will just move to the next element. So if the address of the current element/variable (where pointer arithmetic operator or increment oparetor will be used) is 87994, then after using the pointer arithmetic operator(++), the pointer variable will move to the next element(int variable) whose address is 87998. So now the pointer variable has moved to the element/variable whose index is 1.
    *ptr = 54;
    ptr++;  // Now the pointer variable moves to the variable whose index is 2. So it can be written that *ptr = &marks[2].
    *ptr = 69;
    printf("The vlaue of index 0 in marks array is: %d\n", marks[0]);
    printf("The vlaue of index 1 in marks array is: %d\n", marks[1]);
    printf("The vlaue of index 2 in marks array is: %d\n", marks[2]);
    printf("The vlaue of index 3 in marks array is: %d\n", marks[3]);
    return 0;
}

// Note: If the variable was a character, then the pointer won't move to the address of 87998. It will go the the address of 87995. Cause an integer variable takes 4 Bytes of memory. But a character takes only 1 Byte.