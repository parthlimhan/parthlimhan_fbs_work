#include<stdio.h>
void main()
{
	int a,temp,rev=0,rem;
	printf("Enter number");
	scanf("%d",&a);

	temp=a;
	while(a>0)
	{
		rem=a%10;
		rev=rev*10+rem;
		a=a/10;
	}	
	if (temp==rev)
	printf("Number is palindrome");
	else
	printf("Number is not palindrome");
}