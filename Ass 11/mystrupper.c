#include<stdio.h>
void mystrupper(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

void main()
{
    char str[50];

    printf("Enter a string: ");
    scanf("%s", str);

    mystrupper(str);

    printf("String in uppercase: %s", str);
}