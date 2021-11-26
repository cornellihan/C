#include <stdio.h>
// Count all the positive integer numbers from an array

int getNum(int array[], int length)
{
    int positives = 0;
    int i = 0;

    for (int i = 0; i < length; i++)
    {
        if (array[i] > 0)
            positives++;
    }

    return positives;
}

int main()
{
    int arr[10] = {-1, 2, 0, 4, -5, 6, -7, 8, 9, 10};
    printf("The amount of positive numbers on the array is %d", getNum(arr, 10));

    return 0;
}