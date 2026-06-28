#include<stdio.h>
void evenOdd(int a)
{
    if(a%2==0)
        printf("Number is Even");
    else
        printf("Number is Odd");
}

void main()
{
    int a;
    printf("Enter Number: ");
    scanf("%d",&a);

    evenOdd(a);
}