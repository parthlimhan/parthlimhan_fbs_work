#include<stdio.h>
typedef struct Time
{
    int hour;
    int min;
    int sec;
}Time;

void store(Time *t)
{
    scanf("%d %d %d", &(*t).hour, &(*t).min, &(*t).sec);
}

void display(Time *t)
{
    printf("Time : %02d:%02d:%02d\n", (*t).hour, (*t).min, (*t).sec);
}

int main()
{
    Time t1, t2, t3;

    printf("Enter Time 1 (hh mm ss): ");
    store(&t1);

    printf("Enter Time 2 (hh mm ss): ");
    store(&t2);

    printf("Enter Time 3 (hh mm ss): ");
    store(&t3);

    printf("\nTime 1:\n");
    display(&t1);

    printf("\nTime 2:\n");
    display(&t2);

    printf("\nTime 3:\n");
    display(&t3);

    return 0;
}