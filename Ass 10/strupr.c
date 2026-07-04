#include<stdio.h>
#include<string.h>
void main()
{
    char arr[20];

    printf("Enter a String: ");
    scanf("%s", arr);

    printf("Uppercase String is: %s", strupr(arr));
}