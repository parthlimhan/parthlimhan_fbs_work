#include<stdio.h>
typedef struct Book
{
    int id;
    char bname[30];
    char author[30];
    int price;
}Book;

void main()
{
    Book b;

    printf("Enter Book ID: ");
    scanf("%d", &b.id);

    printf("Enter Book Name: ");
    scanf("%s", b.bname);

    printf("Enter Author Name: ");
    scanf("%s", b.author);

    printf("Enter Book Price: ");
    scanf("%d", &b.price);

    printf("\nBook Details\n");
    printf("Book ID : %d\n", b.id);
    printf("Book Name : %s\n", b.bname);
    printf("Author : %s\n", b.author);
    printf("Price : %d\n", b.price);
}