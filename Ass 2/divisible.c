#include<stdio.h>
void main()
{
	int a;
	printf("Enter Number :");
	scanf("%d", &a);
	
	if(a%3==0 && a%5==0)
	printf("Number is divisible by 3 and 5");
	else if(a%3==0 && a%5!=0)
	printf("Number is divisible by 3 but not by 5");
	else if(a%3!=0 && a%5==0)
	printf("Number is divisible by 5 but not by 3");
	else
	printf("Number is neither divisible by 3 nor by 5");
}