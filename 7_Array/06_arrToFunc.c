#include <stdio.h>
// Time Stamp: 7:30:50 => Yes.

void func(int *);
int main()
{
    int marks[3] = {1, 2, 3};
    func(marks);
    for (int i = 0; i < 3; i++)
    {
        printf("The value of marks[%d] is: %d\n", i, marks[i]);
        // Here marks[i] is basically telling the index of marks. Firstly i is 0, so first index of marks will be printed. Then while i's value is 1, then the 2nd index of marks will be printed.
    }

    return 0;
}
void func(int *ptr) // The argument will be &marks[0]
{
    for (int i = 0; i < 3; i++)
    {
        *ptr = 54;
        ptr++;
    }
    // We know that marks is nothing but &marks[0]. So when the argument marks is passing it's value to *ptr paremeter, the value of *ptr is going to be 1 {cause &marks[0]=1}. And right after, the first line of the for loop that says marks = 54 will be executed. So that means the value of marks[0] is going to be 54 {Cause we are passing the arguments by reference instead of passing by value. So instead of just changing the value of *ptr, it also changes the value of marks[0]}. And when the pointer variable is incrementing, it's just going to the next element. And after the loop runs again, the value of marks[1] is also going to be 54. So the values of the indexes will be becomming 54 until the loop ends.
}