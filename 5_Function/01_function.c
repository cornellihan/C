#include <stdio.h>

void display(); // Function Prototype (void can't return anything.)

int main()
{
    int a;
    display(); // Function Call (Here we don't need to write the data type or the keyword 'void' before the function name)
    return 0;
}

void display() // Function Definition (It is also called function body)
{
    printf("Hello World 1\n");
    printf("Hello World 2\n");
    printf("Hello World 3\n");
    printf("Hello World 4\n");
    printf("Hello World 5\n");
    printf("Hello World 6\n");
}

// Note: When a function is called from main(), the main function falls asleep and gets temporarily suspended. During this time, the control goes to the function that is called. When the function body is done executing, main() resumes.