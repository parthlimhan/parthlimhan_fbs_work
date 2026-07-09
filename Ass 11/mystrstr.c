#include<stdio.h>
int mystrstr(char str[], char sub[])
{
    int i, j;

    for(i = 0; str[i] != '\0'; i++)
    {
        j = 0;

        while(sub[j] != '\0' && str[i + j] == sub[j])
        {
            j++;
        }

        if(sub[j] == '\0')
            return i;
    }

    return -1;
}

void main()
{
    char str[50], sub[20];
    int pos;

    printf("Enter main string: ");
    scanf("%s", str);

    printf("Enter substring: ");
    scanf("%s", sub);

    pos = mystrstr(str, sub);

    if(pos == -1)
        printf("Substring Not Found");
    else
        printf("Substring Found at Position %d", pos);
}