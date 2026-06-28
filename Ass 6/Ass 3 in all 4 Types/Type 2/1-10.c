#include <stdio.h>
void display(int n)
{
    int i = 1;

    while (i <= n)
    {
        printf("%d ", i);
        i++;
    }
}

void main()
{
    display(10);
}