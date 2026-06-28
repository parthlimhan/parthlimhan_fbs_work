#include <stdio.h>
int checkTriangle()
{
    int s1, s2, s3;

    printf("Enter sides of triangle: ");
    scanf("%d%d%d", &s1, &s2, &s3);

    if (s1 == s2 && s2 == s3)
        return 1;
    else if (s1 == s2 || s2 == s3 || s1 == s3)
        return 2;
    else
        return 3;
}

void main()
{
    int result;

    result = checkTriangle();

    if (result == 1)
        printf("Triangle is Equilateral");
    else if (result == 2)
        printf("Triangle is Isosceles");
    else
        printf("Triangle is Scalene");
}