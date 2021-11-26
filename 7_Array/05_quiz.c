#include <stdio.h>

int main()
{
    int i = 48;
    int *ptr = &i;
    printf("The value of i is: %d\n", i);
    printf("The value of ptr is: %u\n", ptr);
    printf("The address of i is: %u\n", &i);
    ptr = ptr - 2;
    // It also can be written => ptr = ptr + 2;

    printf("The value of ptr after decrementation is: %u\n", ptr);
    printf("The address of i is: %u\n", &i);
    printf("The value of comparison of ptr with &i: %d\n", ptr - &i);
    // This is basically telling me how behind is ptr from the address of i. Here one integer has 4 bytes of memory. So when ptr is behind 8 byte of memory, then ptr is basically 2 integer(int's value) behid i. While ptr's address is in front of i, it will show possitive result.
    if (ptr > &i)
    {
        printf("ptr is greater than i");
    }
    else
    {
        printf("ptr is less than i");
    }

    return 0;
}