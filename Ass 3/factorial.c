#include<stdio.h>
void main()
{
	int x=5, i=1, fact=1;
	while(i<=x)
	{
		if(i<=x)
		{
			fact = fact * i;
			i++;
		}
	}
	printf("Factorial = %d", fact);
}