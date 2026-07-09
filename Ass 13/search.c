#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *arr, i, num, found = 0;

    arr = (int *)malloc(5 * sizeof(int));

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &num);

    for(i = 0; i < 5; i++)
    {
        if(arr[i] == num)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Number Found");
    else
        printf("Number Not Found");

    free(arr);
}