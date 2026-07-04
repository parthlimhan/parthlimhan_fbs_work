#include<stdio.h>
void printAlternate(int arr[], int size)
{
    int i;
	printf("Alternate Elements:\n");

    for(i = 0; i < size; i = i + 2)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[10];
    int i;

    printf("Enter 10 elements:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printAlternate(arr, 10);

    return 0;
}