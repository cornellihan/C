#include <stdio.h>
// Solve the previous lesson by taking input from the user.

int main()
{
    int arr[10];
    int n;
    printf("Enter the number you want to have it's multiplication table: ");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1);
        printf("%d X %d = %d\n", n, (i + 1), arr[i]);
    }

    return 0;
}