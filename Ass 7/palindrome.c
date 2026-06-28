#include<stdio.h>

void palindrome(int *a)
{
    int temp, rev = 0, rem;

    temp = *a;

    while(*a > 0)
    {
        rem = *a % 10;
        rev = rev * 10 + rem;
        *a = *a / 10;
    }

    if(temp == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}

int main()
{
    int a;

    printf("Enter Number: ");
    scanf("%d", &a);

    palindrome(&a);

    return 0;
}