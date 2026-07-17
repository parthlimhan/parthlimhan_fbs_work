#include<stdio.h>
typedef struct Distance
{
    int feet;
    int inch;
}Distance;

void store(Distance *d)
{
    scanf("%d %d", &(*d).feet, &(*d).inch);
}

void display(Distance *d)
{
    printf("Distance : %d feet %d inch\n", (*d).feet, (*d).inch);
}

int main()
{
    Distance d1, d2, d3;

    printf("Enter Distance 1 (feet inch): ");
    store(&d1);

    printf("Enter Distance 2 (feet inch): ");
    store(&d2);

    printf("Enter Distance 3 (feet inch): ");
    store(&d3);

    printf("\nDistance 1:\n");
    display(&d1);

    printf("\nDistance 2:\n");
    display(&d2);

    printf("\nDistance 3:\n");
    display(&d3);

    return 0;
}