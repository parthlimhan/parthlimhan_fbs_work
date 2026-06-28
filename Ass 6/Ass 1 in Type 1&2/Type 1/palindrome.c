#include<stdio.h>
void palindrome()
{
    int a,temp,rev=0,rem;

    printf("Enter Number: ");
    scanf("%d",&a);

    temp=a;

    while(a>0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }

    if(temp==rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}

void main()
{
    palindrome();
}