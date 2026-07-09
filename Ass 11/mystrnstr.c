#include<stdio.h>
int mystrnstr(char str[], char sub[], int n)
{
    int i, j;

    for(i = 0; i < n; i++)
    {
        j = 0;

        while(sub[j] != '\0' && str[i + j] == sub[j] && (i + j) < n)
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
    int n, pos;

    printf("Enter main string: ");
    scanf("%s", str);

    printf("Enter substring: ");
    scanf("%s", sub);

    printf("Enter number of characters to search: ");
    scanf("%d", &n);

    pos = mystrnstr(str, sub, n);

    if(pos == -1)
        printf("Substring Not Found");
    else
        printf("Substring Found at Position %d", pos);
}