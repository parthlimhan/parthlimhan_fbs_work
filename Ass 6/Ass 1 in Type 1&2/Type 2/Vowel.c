#include<stdio.h>
void vowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("Vowel");
    else
        printf("Consonant");
}

void main()
{
    char ch;

    printf("Enter Character: ");
    scanf(" %c",&ch);

    vowel(ch);
}