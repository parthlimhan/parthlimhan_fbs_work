#include<stdio.h>
int mystrrchr(char str[], char ch)
{
    int i = 0, pos = -1;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
            pos = i;

        i++;
    }

    return pos;
}

void main()
{
    char str[50], ch;
    int pos;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    pos = mystrrchr(str, ch);

    if(pos == -1)
        printf("Character Not Found");
    else
        printf("Last Occurrence at Position %d", pos);
}