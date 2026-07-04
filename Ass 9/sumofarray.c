#include<stdio.h>
void findSum(int arr[], int size)
{
    int i, sum = 0;

    for(i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum = %d", sum);
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

    findSum(arr, 5);

    return 0;
}