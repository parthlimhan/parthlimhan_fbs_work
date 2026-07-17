#include<stdio.h>
typedef struct Product
{
    char name[20];
    float price;
    int quantity;
}Product;

void accept(Product p[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Product %d\n", i + 1);

        printf("Name: ");
        scanf("%s", p[i].name);

        printf("Price: ");
        scanf("%f", &p[i].price);

        printf("Quantity: ");
        scanf("%d", &p[i].quantity);
    }
}

void display(Product p[], int n)
{
    int i;
    float total = 0;

    printf("\nProduct Details\n");

    for(i = 0; i < n; i++)
    {
        printf("\nProduct %d\n", i + 1);
        printf("Name: %s\n", p[i].name);
        printf("Price: %.2f\n", p[i].price);
        printf("Quantity: %d\n", p[i].quantity);

        total = total + (p[i].price * p[i].quantity);
    }

    printf("\nTotal Cost = %.2f\n", total);
}

int main()
{
    int n;
	printf("Enter number of products: ");
    scanf("%d", &n);

    Product p[n];
	accept(p, n);
	display(p, n);

    return 0;
}