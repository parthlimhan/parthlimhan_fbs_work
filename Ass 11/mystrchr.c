#include<stdio.h>
int mystrchr(char str[], char ch)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
            return i;

        i++;
    }

    return -1;
}

void main()
{
    char str[50], ch;
    int pos;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    pos = mystrchr(str, ch);

    if(pos == -1)
        printf("Character Not Found");
    else
        printf("Character Found at Position %d", pos);
}