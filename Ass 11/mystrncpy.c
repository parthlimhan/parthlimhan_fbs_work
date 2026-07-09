#include<stdio.h>
void mystrncpy(char src[], char dest[], int n)
{
    int i;

    for(i=0; i<n && src[i] !='\0'; i++)
    {
        dest[i] = src[i];
    }

    dest[i] = '\0';
}

void main()
{
    char str1[50], str2[50];
    int n;

    printf("Enter a string: ");
    scanf("%s", str1);

    printf("Enter number of characters to copy: ");
    scanf("%d", &n);

    mystrncpy(str1, str2, n);

    printf("Copied string is: %s", str2);
}