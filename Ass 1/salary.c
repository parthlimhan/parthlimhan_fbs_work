#include<stdio.h>

void main()
{
    float basic, da, ta, hra, total;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    if(basic <= 500)
    {
        da = basic * 0.10;
        ta = basic * 0.20;
        hra = basic * 0.25;
    }
    else
    {
        da = basic * 0.15;
        ta = basic * 0.25;
        hra = basic * 0.30;
    }

    total = basic + da + ta + hra;

    printf("\nBasic Salary = %.2f", basic);
    printf("\nDA = %f", da);
    printf("\nTA = %f", ta);
    printf("\nHRA = %f", hra);
    printf("\nTotal Salary = %f", total);
}