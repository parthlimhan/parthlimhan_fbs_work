#include<stdio.h>
typedef struct SalesManager
{
    int id;
    char name[20];
    int salary;
    int incentive;
    int target;
}SalesManager;

void store(SalesManager *s)
{
    scanf("%d %s %d %d %d", &(*s).id, (*s).name, &(*s).salary, &(*s).incentive, &(*s).target);
}

void display(SalesManager *s)
{
    printf("ID : %d\n", (*s).id);
    printf("Name : %s\n", (*s).name);
    printf("Salary : %d\n", (*s).salary);
    printf("Incentive : %d\n", (*s).incentive);
    printf("Target : %d\n", (*s).target);
}

int main()
{
    SalesManager s1, s2, s3;

    printf("Enter details of SalesManager 1:\n");
    store(&s1);

    printf("Enter details of SalesManager 2:\n");
    store(&s2);

    printf("Enter details of SalesManager 3:\n");
    store(&s3);

    printf("\nSalesManager 1 Details:\n");
    display(&s1);

    printf("\nSalesManager 2 Details:\n");
    display(&s2);

    printf("\nSalesManager 3 Details:\n");
    display(&s3);

    return 0;
}