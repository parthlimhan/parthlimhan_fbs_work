#include<stdio.h>
typedef struct Date
{
    int date;
    int month;
    int year;
}Date;

void store(Date *d)
{
    scanf("%d %d %d", &(*d).date, &(*d).month, &(*d).year);
}

void display(Date *d)
{
    printf("Date : %02d/%02d/%04d\n", (*d).date, (*d).month, (*d).year);
}

int main()
{
    Date d1, d2, d3;

    printf("Enter Date 1 (dd mm yyyy): ");
    store(&d1);

    printf("Enter Date 2 (dd mm yyyy): ");
    store(&d2);

    printf("Enter Date 3 (dd mm yyyy): ");
    store(&d3);

    printf("\nDate 1:\n");
    display(&d1);

    printf("\nDate 2:\n");
    display(&d2);

    printf("\nDate 3:\n");
    display(&d3);

    return 0;
}