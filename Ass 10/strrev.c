#include<stdio.h>
#include<string.h>
void main()
{
    char arr[20];

    printf("Enter a String: ");
    scanf("%s", arr);

    printf("Reverse String is: %s", strrev(arr));
}