#include <stdio.h>
int palindrome(int n)
{
    int temp, rem, rev = 0;

    temp = n;

    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (temp == rev)
        return 1;
    else
        return 0;
}

void main()
{
    int result;

    result = palindrome(121);

    if (result == 1)
        printf("121 is a Palindrome Number");
    else
        printf("121 is not a Palindrome Number");
}