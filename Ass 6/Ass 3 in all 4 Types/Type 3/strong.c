#include <stdio.h>

int strong()
{
    int n = 145, temp, rem, sum = 0, i, fact;

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
        return 1;
    else
        return 0;
}

void main()
{
    int result;

    result = strong();

    if(result == 1)
        printf("145 is a Strong Number");
    else
        printf("145 is not a Strong Number");
}