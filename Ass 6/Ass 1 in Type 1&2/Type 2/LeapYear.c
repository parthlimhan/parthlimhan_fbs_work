#include<stdio.h>
void leapYear(int year)
{
    if((year%400==0)||(year%4==0 && year%100!=0))
        printf("Leap Year");
    else
        printf("Not Leap Year");
}

void main()
{
    int year;

    printf("Enter Year: ");
    scanf("%d",&year);

    leapYear(year);
}