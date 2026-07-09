#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *arr, i, j, count;

    arr = (int *)malloc(10 * sizeof(int));

    printf("Enter 10 elements:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Prime Numbers:\n");

    for(i = 0; i < 10; i++)
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

    free(arr);
}