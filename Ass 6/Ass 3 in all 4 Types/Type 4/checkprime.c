#include <stdio.h>
int prime(int x)
{
    int i, count = 1;

    if (x <= 1)
    {
        count = 0;
    }
    else
    {
        for (i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                count = 0;
                break;
            }
        }
    }

    return count;
}

void main()
{
    int result;

    result = prime(7);

    if (result == 1)
        printf("7 is a prime number");
    else
        printf("7 is not a prime number");
}