#include<stdio.h>
void main()
{
	int s1,s2,s3;
	printf("Enter sides of triangle");
	scanf("%d%d%d",&s1,&s2,&s3);
	
	if(s1==s2&&s2==s3)
	printf("Triangle is equilateral");
	else if(s1==s2||s2==s3||s1==s3)
	printf("Triangle is isosceles");
	else
	printf("Triangle is scalene");
}