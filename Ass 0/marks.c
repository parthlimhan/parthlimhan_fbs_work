#include <stdio.h>
int main() 
{
    int m1, m2, m3, m4, m5, total;

    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    float percentage = total / 5;

    printf("Total Marks = %d\n", total);
    printf("Percentage = %f", percentage);
}