#include <stdio.h>
void perfect(int n)
{
    int i, sum = 0;

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == n)
        printf("%d is a Perfect Number", n);
    else
        printf("%d is not a Perfect Number", n);
}

void main()
{
    perfect(6);
}