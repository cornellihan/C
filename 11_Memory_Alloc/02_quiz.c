// Write a programm to create a dynamic array of 5 floats using malloc().
#include <stdio.h>
#include <malloc.h>

int main()
{
    float *ptr;
    ptr = (float *)malloc(5 * sizeof(float));
    ptr[0] = 12.2;
    ptr[1] = 10.52;
    ptr[2] = 48.55;
    ptr[3] = 1.5;
    ptr[4] = 54.2;
    printf("%f", ptr[2]);

    return 0;
}