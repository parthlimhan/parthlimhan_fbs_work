#include <stdio.h>

void main()
{
    int arr[10], i;

    printf("Enter 10 elements:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Alternate Elements:\n");

    for(i = 0; i < 10; i = i + 2)
    {
        printf("%d ", arr[i]);
    }
}