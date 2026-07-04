#include<stdio.h>
#include<string.h>

void main()
{
    char arr1[20], arr2[20];

    printf("Enter a string: ");
    scanf("%s", arr1);

    strcpy(arr2, arr1);
	printf("Copied String is: %s", arr2);
}