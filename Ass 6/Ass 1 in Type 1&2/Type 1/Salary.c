#include<stdio.h>
void salary()
{
    float basic,da,ta,hra,total;

    printf("Enter Basic Salary: ");
    scanf("%f",&basic);

    if(basic<=500)
    {
        da=basic*0.10;
        ta=basic*0.20;
        hra=basic*0.25;
    }
    else
    {
        da=basic*0.15;
        ta=basic*0.25;
        hra=basic*0.30;
    }

    total=basic+da+ta+hra;

    printf("\nTotal Salary = %.2f",total);
}

void main()
{
    salary();
}