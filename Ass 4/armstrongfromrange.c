#include <stdio.h>

int main()
{
    int n, i, temp, rem, sum=0;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d are:\n", n);
    temp = n;

    for(i=1; i<=n; i++)
    {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
	
		if(sum == temp)
    	printf("%d ", sum);
	}
}