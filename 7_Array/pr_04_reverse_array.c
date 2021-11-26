#include <stdio.h>
// Create a function which reverses the array passed to it.

int reverse(int arr[], int n)
{
    // Swap 0 with n-1
    // Swap 1 with n-2
    // Swap 2 with n-3
    // ...
    // Swap i with n-i-1
    // ...
    // Till n/2
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
void display(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");
}

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    display(arr, 10);
    reverse(arr, 10);
    display(arr, 10);
    return 0;
}