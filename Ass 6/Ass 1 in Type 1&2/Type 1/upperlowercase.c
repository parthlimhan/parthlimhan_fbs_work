#include<stdio.h>
void checkCase()
{
    char ch;

    printf("Enter Character: ");
    scanf(" %c",&ch);

    if(ch>='A' && ch<='Z')
        printf("Uppercase");
    else if(ch>='a' && ch<='z')
        printf("Lowercase");
    else
        printf("Not an Alphabet");
}

void main()
{
    checkCase();
}