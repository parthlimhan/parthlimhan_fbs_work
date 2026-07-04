#include<stdio.h>
void printEvenOdd(int arr[], int size)
{
    int i;

    printf("Even Numbers:\n");

    for(i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\nOdd Numbers:\n");

    for(i = 0; i < size; i++)
    {
        if(arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
}

int main()
{
    int arr[5];
    int i;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printEvenOdd(arr, 5);
	return 0;
}