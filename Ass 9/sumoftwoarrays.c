#include<stdio.h>
void addArrays(int arr[], int brr[], int crr[], int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        crr[i] = arr[i] + brr[i];
    }
}

int main()
{
    int arr[5], brr[5], crr[5];
    int i;

    printf("Enter 5 elements for First Array:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter 5 elements for Second Array:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &brr[i]);
    }

    addArrays(arr, brr, crr, 5);

    printf("Third Array (Sum of Two Arrays):\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", crr[i]);
    }

    return 0;
}