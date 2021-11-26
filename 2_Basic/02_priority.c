#include <stdio.h>

int main()
{
    // All of these Operator Presidence and Operator Associativity is a part of "Arithmetic" Instruntions.

    /* Operator Presidence-
        1st: !
        2nd: * / %
        3rd: + -
        4rth: < <= > >=
        5th: ==, !=
        6th: &&
        7th: ||
        8th: =
    */
    int a = 9 + 5 * 3 - 5;
    printf("The value of a is %d\n", a);
    // The expectaion result is 19 cause the first priority is 5 * 3

    /* Operator Associativity-
    When the operators of equal priority belongs in the same line of code, then the priority is taken from the left to right
    Ex:-
        9 * 3 / 27 + 4   =>  (9 * 3) / 27 + 4
        33 / 3 * 9 + 4   =>  (33 / 3) * 9 + 4
    */
    int b = 9 * 3 / 27 + 4;
    printf("The value of b is %d\n", b);
    // The expectaion result is 5

    int c = 33 / 3 * 9 + 4;
    printf("The value of c %d\n", c);
    // The expectation result is 103
    return 0;

    /* The "Control" Instruction has 4 types of control instruction-
        1. Sequence Control Instruction (first line code will be execute first and then second and it will continue)
        2. Decision Control Instruction (if-else condition)
        3. Loop Control Instruction     (while loop, for loop, do-while loop)
        4. Case Control Instruction     (switch and case)
    */
}