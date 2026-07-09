#include<stdio.h>
int mystrncmp(char str1[], char str2[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(str1[i] != str2[i])
            return str1[i] - str2[i];

        if(str1[i] == '\0' || str2[i] == '\0')
            break;
    }

    return 0;
}

void main()
{
    char str1[50], str2[50];
    int n, result;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Enter number of characters: ");
    scanf("%d", &n);

    result = mystrncmp(str1, str2, n);

    if(result == 0)
        printf("First %d characters are Equal", n);
    else
        printf("First %d characters are Not Equal", n);
}