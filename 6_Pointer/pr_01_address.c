#include <stdio.h>
void func(int *);

int main()
{
    int i = 3;
    func(&i);
    printf("The address of i from main() is: %u\n", &i);
    return 0;
}

void func(int *integer)
{
    // *integer = 6;
    printf("The address of i from func() is: %u\n", integer);
}