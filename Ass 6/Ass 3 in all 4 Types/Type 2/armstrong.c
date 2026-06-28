#include <stdio.h>
void armstrong(int x)
{
    int rem, temp, sum = 0;

    temp = x;

    while (x > 0)
    {
        rem = x % 10;
        sum = sum + (rem * rem * rem);
        x = x / 10;
    }

    if (temp == sum)
        printf("%d is an Armstrong Number", temp);
    else
        printf("%d is not an Armstrong Number", temp);
}

void main()
{
    armstrong(153);
}