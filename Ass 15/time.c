#include<stdio.h>
typedef struct Time
{
    int hrs;
    int min;
    int sec;
}Time;

void accept(Time *t)
{
    printf("Enter hours, minutes and seconds: ");
    scanf("%d %d %d", &(*t).hrs, &(*t).min, &(*t).sec);
}

void display(Time *t)
{
    printf("%02d:%02d:%02d\n", (*t).hrs, (*t).min, (*t).sec);
}

Time addTime(Time t1, Time t2)
{
    Time t3;

    t3.sec = t1.sec + t2.sec;
    t3.min = t1.min + t2.min;
    t3.hrs = t1.hrs + t2.hrs;

    if(t3.sec >= 60)
    {
        t3.min = t3.min + t3.sec / 60;
        t3.sec = t3.sec % 60;
    }

    if(t3.min >= 60)
    {
        t3.hrs = t3.hrs + t3.min / 60;
        t3.min = t3.min % 60;
    }

    return t3;
}

int convertToSec(Time t)
{
    return (t.hrs * 3600) + (t.min * 60) + t.sec;
}

int main()
{
    Time t1, t2, t3;

    printf("Enter First Time\n");
    accept(&t1);

    printf("Enter Second Time\n");
    accept(&t2);

    printf("\nFirst Time : ");
    display(&t1);

    printf("Second Time : ");
    display(&t2);

    t3 = addTime(t1, t2);

    printf("Addition of Time : ");
    display(&t3);

    printf("\nFirst Time in Seconds = %d\n", convertToSec(t1));
    printf("Second Time in Seconds = %d\n", convertToSec(t2));

    return 0;
}