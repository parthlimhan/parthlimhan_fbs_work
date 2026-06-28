#include <stdio.h>
int display()
{
    int i = 1;

    while (i <= 10)
    {
        printf("%d ", i);
        i++;
    }

    return 0;
}

void main()
{
    display();
}