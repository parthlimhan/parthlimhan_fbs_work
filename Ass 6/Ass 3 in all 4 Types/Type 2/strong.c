#include <stdio.h>

void strong(int n)
{
    int temp, rem, sum = 0, i, fact;

    temp = n;

    while(n > 0)
    {
        rem = n % 10;

        fact = 1;
        for(i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if(sum == temp)
        printf("%d is a Strong Number", temp);
    else
        printf("%d is not a Strong Number", temp);
}

void main()
{
    strong(145);
}