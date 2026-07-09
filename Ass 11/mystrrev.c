#include<stdio.h>
void mystrrev(char str[])
{
    int i = 0, j, temp;

    while(str[i] != '\0')
    {
        i++;
    }

    j = i - 1;

    for(i = 0; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void main()
{
    char str[50];

    printf("Enter a string: ");
    scanf("%s", str);

    mystrrev(str);

    printf("Reversed string is: %s", str);
}