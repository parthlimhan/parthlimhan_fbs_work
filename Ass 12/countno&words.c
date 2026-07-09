#include<stdio.h>
void main()
{
    char str[100];
    int i;
    int alphabets = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            alphabets++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else if(str[i] != ' ')
        {
            special++;
        }
    }

    printf("Number of Alphabets = %d\n", alphabets);
    printf("Number of Digits = %d\n", digits);
    printf("Number of Special Characters = %d", special);
}