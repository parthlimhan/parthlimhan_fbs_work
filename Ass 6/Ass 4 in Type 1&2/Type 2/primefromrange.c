#include<stdio.h>

void prime(int n)
{
    int i, j, count;

    printf("Prime numbers from 1 to %d are:\n", n);

    for(i = 2; i <= n; i++)
    {
        count = 0;

        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }

        if(count == 2)
        {
            printf("%d ", i);
        }
    }
}

void main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    prime(n);
}