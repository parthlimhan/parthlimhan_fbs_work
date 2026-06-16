#include<stdio.h>
void main()
{
	int mks;
	printf("Enter marks :");
	scanf("%d",&mks);
	
	if(mks>=75)
	printf("Result : Distinction");
	else if(mks>=65)
	printf("Result : First Class");
	else if(mks>=55)
	printf("Result : Second Class");
	else if(mks>=40 && mks<55)
	printf("Result : Pass");
	else
	printf("Result : Fail");
}