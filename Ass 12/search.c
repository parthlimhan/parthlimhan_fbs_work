#include<stdio.h>
void main()
{
    char str[100], ch;
    int i, found = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to search: ");
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            found = 1;
            printf("Character Found at Position %d", i);
            break;
        }
    }

    if(found == 0)
    {
        printf("Character Not Found");
    }
}