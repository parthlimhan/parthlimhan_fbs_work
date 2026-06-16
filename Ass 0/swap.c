#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("Enter A and B");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("After Swapping:");
	printf("A=%d and B=%d",a,b);
}