#include<stdio.h>
void main()
{
	float a,b,c,d,e;
	printf("Enter five nos.");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	float avg = (a+b+c+d+e)/5;
	printf("Average = %f",avg);
}