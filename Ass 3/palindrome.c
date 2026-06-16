#include<stdio.h>
void main()
{
    int n = 121, temp, rem, rev = 0;
	temp = n;
	while(n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if(temp == rev)
        printf("%d is a Palindrome Number", temp);
    else
        printf("%d is not a Palindrome Number", temp);
}