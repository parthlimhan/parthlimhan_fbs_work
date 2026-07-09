#include<stdio.h>
int mystrlen(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }

    return i;
}

void main()
{
    char str[50];
    int length;

    printf("Enter a string: ");
    scanf("%s", str);

    length = mystrlen(str);

    printf("Length of the string is: %d", length);
}