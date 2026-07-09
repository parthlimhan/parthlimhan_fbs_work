#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr, i, sum = 0;

    arr = (int *)malloc(5 * sizeof(int));

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum = %d", sum);

    free(arr);
}