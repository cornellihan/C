#include <stdio.h>
int sum(int *, int *);

int main()
{
    int x = 4;
    int y = 15;
    printf("The value of x + y is: %d\n", sum(&x, &y));
    printf("The value of x and y is %d and %d\n", x, y);
    return 0;
}

int sum(int *a, int *b)
{
    *a = 56; // Value of address a
    return *a + *b;
}

// 6:9:35

// Here the address of the variable is passed to the function as arguements.
// That's mean another byte to keep the value of 'a' will not be created in memory. 'a' will directly go to the location of 'x' and will grab it's value to itself. But while 'a' is predefined on it's function, so 'a' will go to the location of 'x' but won't grab the value. It will overwrite it's own value to this location. (Cause we know that when a parameter is defined from the function, it can't be change to the int main() function.). And at last, while 'a' overwrites it's value to the location of 'x', so the value of 'x' is also going to be changed.