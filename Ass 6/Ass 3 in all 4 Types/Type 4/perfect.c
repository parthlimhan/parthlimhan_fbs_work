#include <stdio.h>
int perfect(int n)
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
        return 1;
    else
        return 0;
}

void main()
{
    int result;

    result = perfect(6);

    if(result == 1)
        printf("6 is a Perfect Number");
    else
        printf("6 is not a Perfect Number");
}