#include <stdio.h>

void main()
{
    int arr[5], i;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array in Reverse Order:\n");

    for(i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}