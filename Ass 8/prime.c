#include <stdio.h>

void main()
{
    int arr[10], i, j, count;

    printf("Enter 5 elements:\n");

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
}