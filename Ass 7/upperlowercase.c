#include<stdio.h>

void checkCase(char *ch)
{
    if(*ch >= 'A' && *ch <= 'Z')
        printf("Uppercase");
    else if(*ch >= 'a' && *ch <= 'z')
        printf("Lowercase");
    else
        printf("Not an Alphabet");
}

int main()
{
    char ch;

    printf("Enter Character: ");
    scanf(" %c", &ch);

    checkCase(&ch);

    return 0;
}