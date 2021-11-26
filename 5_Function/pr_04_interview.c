#include <stdio.h>

int main()
{
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    return 0;
}

// Expactation: 4 5 5
// Reality: 6 6 4
// In this case, the compiler compile from right to left.
// Here the right is a++. That means, it will print the value of a first, then it will increment the value of a. Then the second compilation is  ++a. Before it, the value of a is 5, and now ++a will increment the value of a first, then will print it. So here it will print 6. And lastly it says to print the value of a. Since the value of a is 6 by ++a, so now it will again print 6 for the last. So the final result is 6 6 4.