#include<stdio.h>
void reverseArray(int arr[], int size)
{
    int i;
	printf("Array in Reverse Order:\n");

    for(i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
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

    reverseArray(arr, 5);
	return 0;
}