#include<stdio.h>
void main()
{
	int s;
	printf("Enter Age :");
	scanf("%d",&s);
	
	if(s>=18)
	printf("Eligible to vote");
	else
	printf("Not eligible to vote");	
}