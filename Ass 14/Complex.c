#include<stdio.h>
typedef struct Complex
{
    int real;
    int imaginary;
}Complex;

void store(Complex *c)
{
    scanf("%d %d", &(*c).real, &(*c).imaginary);
}

void display(Complex *c)
{
    printf("Complex Number : %d + %di\n", (*c).real, (*c).imaginary);
}

int main()
{
    Complex c1, c2, c3;

    printf("Enter Complex Number 1 (real imaginary): ");
    store(&c1);

    printf("Enter Complex Number 2 (real imaginary): ");
    store(&c2);

    printf("Enter Complex Number 3 (real imaginary): ");
    store(&c3);

    printf("\nComplex Number 1:\n");
    display(&c1);

    printf("\nComplex Number 2:\n");
    display(&c2);

    printf("\nComplex Number 3:\n");
    display(&c3);

    return 0;
}