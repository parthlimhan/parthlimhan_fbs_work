#include<stdio.h>
void main()
{
    char str[100];
    int i, index;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter the index to remove: ");
    scanf("%d", &index);

    for(i = index; str[i] != '\0'; i++)
    {
        str[i] = str[i + 1];
    }

    printf("String after removing character: %s", str);
}