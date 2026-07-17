#include<stdio.h>
typedef struct HR
{
    int id;
    char name[20];
    int salary;
    int commission;
}HR;

void store(HR *h)
{
    scanf("%d %s %d %d", &(*h).id, (*h).name, &(*h).salary, &(*h).commission);
}

void display(HR *h)
{
    printf("ID : %d\n", (*h).id);
    printf("Name : %s\n", (*h).name);
    printf("Salary : %d\n", (*h).salary);
    printf("Commission : %d\n", (*h).commission);
}

int main()
{
    HR h1, h2, h3;

    printf("Enter details of HR 1:\n");
    store(&h1);

    printf("Enter details of HR 2:\n");
    store(&h2);

    printf("Enter details of HR 3:\n");
    store(&h3);

    printf("\nHR 1 Details:\n");
    display(&h1);

    printf("\nHR 2 Details:\n");
    display(&h2);

    printf("\nHR 3 Details:\n");
    display(&h3);

    return 0;
}