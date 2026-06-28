#include <stdio.h>
int armstrong()
{
    int x = 153, rem, temp, sum = 0;

    temp = x;

    while (x > 0)
    {
        rem = x % 10;
        sum = sum + (rem * rem * rem);
        x = x / 10;
    }

    if (temp == sum)
        return 1;
    else
        return 0;
}

void main()
{
    int result;

    result = armstrong();

    if (result == 1)
        printf("153 is an Armstrong Number");
    else
        printf("153 is not an Armstrong Number");
}