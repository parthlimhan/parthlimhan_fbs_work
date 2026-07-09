#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *arr, i;

    arr = (int *)malloc(10 * sizeof(int));

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

    free(arr);
}