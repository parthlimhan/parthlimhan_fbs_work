#include<stdio.h>

void armstrong(int n)
{
    int num, temp, rem, sum;

    printf("Armstrong numbers from 1 to %d are:\n", n);

    for(num = 1; num <= n; num++)
    {
        temp = num;
        sum = 0;

        while(temp > 0)
        {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10;
        }

        if(sum == num)
            printf("%d ", num);
    }
}

void main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    armstrong(n);
}