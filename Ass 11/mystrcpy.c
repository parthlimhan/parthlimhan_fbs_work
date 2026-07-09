#include<stdio.h>
void mystrcpy(char src[], char dest[])
{
    int i = 0;

    while (src[i]!='\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
}

void main()
{
    char str1[50], str2[50];

    printf("Enter a string: ");
    scanf("%s", str1);

    mystrcpy(str1, str2);

    printf("Copied string is: %s", str2);
}