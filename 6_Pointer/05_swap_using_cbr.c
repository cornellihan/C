#include <stdio.h>
void swap(int *, int *);

int main()
{
    int a = 5;
    int b = 7;

    printf("Value of a and b before swap is %d and %d\n", a, b);
    // swap(a, b);
    swap(&a, &b);
    printf("Value of a and b after swap is %d and %d\n", a, b);
    return 0;
}

void swap(int *x, int *y)
{
    // printf("Value of a and b before swap is %d and %d\n", a, b);
    int temp;
    temp = *x; // a = 5, temp = 5, b = 7
    *x = *y;   // a = 7, temp = 5, b = 7
    *y = temp; // a = 7, temp = 5, b = 5
    printf("Value of x and y after swap is %d and %d\n", *x, *y);

    // If we used passByValue, then the value of x and y will change inside the function. But the value of argument a and b will not gonna change, cause here the value of a and b is going to copy and paste to the address of x and y. But we have used callByAddress and so x and y is going to the address of a and b and first take there value from the address. And then when the value of x and y is changing, it's actually overwritting the value on the address of a and b. So eventually the value of a and b is also going to change.
}