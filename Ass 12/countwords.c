#include <stdio.h>

void main()
{
    char str[100];
    int i, count = 1;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            count++;
        }
    }

    printf("Number of words = %d", count);
}