#include<stdio.h>

void salary(float *basic)
{
    float da, ta, hra, total;

    if(*basic <= 500)
    {
        da = *basic * 0.10;
        ta = *basic * 0.20;
        hra = *basic * 0.25;
    }
    else
    {
        da = *basic * 0.15;
        ta = *basic * 0.25;
        hra = *basic * 0.30;
    }

    total = *basic + da + ta + hra;

    printf("\nTotal Salary = %.2f", total);
}

int main()
{
    float basic;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    salary(&basic);

    return 0;
}