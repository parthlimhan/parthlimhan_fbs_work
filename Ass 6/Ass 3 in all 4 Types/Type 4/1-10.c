#include <stdio.h>
int display(int n)
{
    int i = 1;

    while (i <= n)
    {
        printf("%d ", i);
        i++;
    }

    return 0;
}

void main()
{
    display(10);
}