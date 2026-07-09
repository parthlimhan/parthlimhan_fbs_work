#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *arr1, *arr2, *arr3;
    int i;

    arr1 = (int *)malloc(5 * sizeof(int));
    arr2 = (int *)malloc(5 * sizeof(int));
    arr3 = (int *)malloc(10 * sizeof(int));

    printf("Enter 5 elements for First Array:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter 5 elements for Second Array:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for(i = 0; i < 5; i++)
    {
        arr3[i] = arr1[i];
    }

    for(i = 0; i < 5; i++)
    {
        arr3[i + 5] = arr2[i];
    }

    printf("Merged Array:\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", arr3[i]);
    }

    free(arr1);
    free(arr2);
    free(arr3);
}