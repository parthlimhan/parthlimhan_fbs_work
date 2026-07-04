#include<stdio.h>
void findMinMax(int arr[], int n)
{
    int i;
    int min, max;

    min = arr[0];
    max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }

        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Minimum number = %d\n", min);
    printf("Maximum number = %d\n", max);
}

int main()
{
    int arr[100];
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    findMinMax(arr, n);

    return 0;
}