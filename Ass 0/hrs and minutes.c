#include <stdio.h>

int main() 
{
    int min, hrs, remainingMinutes;

    printf("Enter total minutes ");
    scanf("%d", &min);

    hrs = min/60;
    remainingMinutes = min % 60;

    printf("Hours = %d\n", hrs);
    printf("Remaining Minutes = %d", remainingMinutes);
}