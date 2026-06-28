#include<stdio.h>

void perfect(int n)
{
    int i, j, sum;

    printf("Perfect numbers from 1 to %d are:\n", n);

    for(i = 1; i <= n; i++)
    {
        sum = 0;

        for(j = 1; j < i; j++)
        {
            if(i % j == 0)
            {
                sum = sum + j;
            }
        }

        if(sum == i)
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

    perfect(n);
}