#include<stdio.h>
typedef struct Product
{
    int id;
    char name[20];
    int quantity;
    float price;
}Product;

void store(Product *p)
{
    scanf("%d %s %d %f", &(*p).id, (*p).name, &(*p).quantity, &(*p).price);
}

void display(Product *p)
{
    printf("ID : %d\n", (*p).id);
    printf("Name : %s\n", (*p).name);
    printf("Quantity : %d\n", (*p).quantity);
    printf("Price : %.2f\n", (*p).price);
}

int main()
{
    Product p1, p2, p3;

    printf("Enter details of Product 1 (ID Name Quantity Price): ");
    store(&p1);

    printf("Enter details of Product 2 (ID Name Quantity Price): ");
    store(&p2);

    printf("Enter details of Product 3 (ID Name Quantity Price): ");
    store(&p3);

    printf("\nProduct 1 Details:\n");
    display(&p1);

    printf("\nProduct 2 Details:\n");
    display(&p2);

    printf("\nProduct 3 Details:\n");
    display(&p3);

    return 0;
}