#include <stdio.h>
int greatest()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
            return a;
        else
            return c;
    }
    else
    {
        if (b > c)
            return b;
        else
            return c;
    }
}

void main()
{
    int result;

    result = greatest();

    printf("%d is the greatest number", result);
}