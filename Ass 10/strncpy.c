#include<stdio.h>
#include<string.h>
void main()
{
    char arr1[20], arr2[20];

    printf("Enter a string: ");
    scanf("%s", arr1);

    strncpy(arr2, arr1, 4);
    arr2[4] = '\0';

    printf("Copied String is: %s", arr2);
}