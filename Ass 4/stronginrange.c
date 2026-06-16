#include <stdio.h>
void main()
{
    int n, num, temp, rem, sum, fact, i;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Strong numbers from 1 to %d are:\n", n);

    for(num = 1; num <= n; num++)
    {
        sum = 0;

        for(temp = num; temp > 0; temp = temp / 10)
        {
            rem = temp % 10;
            fact = 1;

            for(i = 1; i <= rem; i++)
            {
                fact = fact * i;
            }

            sum = sum + fact;
        }

        if(sum == num)
        {
            printf("%d ", num);
        }
    }
}