#include<stdio.h>

void main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
        printf("Character is Uppercase");
    else if(ch >= 'a' && ch <= 'z')
        printf("Character is Lowercase");
    else
        printf("It is not an alphabet");
}