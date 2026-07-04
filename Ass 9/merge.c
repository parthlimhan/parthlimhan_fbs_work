#include<stdio.h>
void mergeArray(int arr1[], int arr2[], int arr3[])
{
    int i;

    for(i = 0; i < 5; i++)
    {
        arr3[i] = arr1[i];
    }

    for(i = 0; i < 5; i++)
    {
        arr3[i + 5] = arr2[i];
    }
}

int main()
{
    int arr1[5], arr2[5], arr3[10];
    int i;

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

    mergeArray(arr1, arr2, arr3);
	printf("Merged Array:\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}