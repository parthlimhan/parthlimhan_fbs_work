#include<stdio.h>
void mystrlower(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
}

void main()
{
    char str[50];

    printf("Enter a string: ");
    scanf("%s", str);

    mystrlower(str);

    printf("Lowercase string is: %s", str);
}