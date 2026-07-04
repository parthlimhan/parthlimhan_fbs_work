#include<stdio.h>
void printPrime(int arr[], int size)
{
    int i, j, count;
	printf("Prime Numbers:\n");

    for(i = 0; i < size; i++)
    {
        count = 0;

        if(arr[i] > 1)
        {
            for(j = 1; j <= arr[i]; j++)
            {
                if(arr[i] % j == 0)
                {
                    count++;
                }
            }

            if(count == 2)
            {
                printf("%d ", arr[i]);
            }
        }
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

    printPrime(arr, 10);

    return 0;
}