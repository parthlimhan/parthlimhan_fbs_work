#include <stdio.h>
void prime(int x)
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

    if (count == 1)
        printf("%d is a prime number", x);
    else
        printf("%d is not a prime number", x);
}

void main()
{
    prime(7);
}