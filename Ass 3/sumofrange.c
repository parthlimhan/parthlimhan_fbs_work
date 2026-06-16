#include<stdio.h>
void main()
{
	int x=1, y=5, sum=0;
	while(x<=y)
	{
		sum = sum + x;
		x++;
	}
	printf("%d ",sum);
}