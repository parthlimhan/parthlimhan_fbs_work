#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter two nos.");
	scanf("%d%d",&a,&b);
	
	int p = a+b;
	int s = a-b;
	int q = a/b;
	int r = a*b;
	int u = a%b;
	
	printf("Addition is : %d",p);
	printf("Substraction is : %d",s);
	printf("Quotient is : %d",q);
	printf("Multiplication is : %d",r);
	printf("Remainder is : %d",u);
	
}