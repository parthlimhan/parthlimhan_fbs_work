#include<stdio.h>
void searchNumber(int arr[], int size, int num)
{
    int i;
    int found = 0;

    for(i = 0; i < size; i++)
    {
        if(arr[i] == num)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("Number Found");
    }
    else
    {
        printf("Number Not Found");
    }
}

int main()
{
    int arr[5];
    int i, num;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &num);

    searchNumber(arr, 5, num);
	return 0;
}