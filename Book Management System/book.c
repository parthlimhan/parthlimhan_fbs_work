#include <stdio.h>
#include <string.h>

#define MAX 100

struct Book
{
    int id;
    char name[50];
    char author[50];
    char category[30];
    float price;
    float rating;
};

void addBook(struct Book books[], int *count);
void displayBooks(struct Book books[], int count);
void searchById(struct Book books[], int count);
void searchByName(struct Book books[], int count);
void removeBook(struct Book books[], int *count);
void updateBook(struct Book books[], int count);
void showAuthorBooks(struct Book books[], int count);
void showCategoryBooks(struct Book books[], int count);
void sortByPrice(struct Book books[], int count);
void sortByRating(struct Book books[], int count);

int main()
{
    struct Book books[MAX];
    int count = 0;
    int choice;

    do
    {
        printf("\n========== BOOK MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Book\n");
        printf("2. Remove Book\n");
        printf("3. Search Book by ID\n");
        printf("4. Search Book by Name\n");
        printf("5. Show Books by Author\n");
        printf("6. Show Books by Category\n");
        printf("7. Update Book Price and Rating\n");
        printf("8. Display Books Sorted by Price\n");
        printf("9. Display Books Sorted by Rating\n");
        printf("10. Display All Books\n");
        printf("11. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addBook(books, &count);
                break;

            case 2:
                removeBook(books, &count);
                break;

            case 3:
                searchById(books, count);
                break;

            case 4:
                searchByName(books, count);
                break;

            case 5:
                showAuthorBooks(books, count);
                break;

            case 6:
                showCategoryBooks(books, count);
                break;

            case 7:
                updateBook(books, count);
                break;

            case 8:
                sortByPrice(books, count);
                break;

            case 9:
                sortByRating(books, count);
                break;

            case 10:
                displayBooks(books, count);
                break;

            case 11:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 11);

    return 0;
}

void addBook(struct Book books[], int *count)
{
    printf("\nEnter Book ID: ");
    scanf("%d", &books[*count].id);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", books[*count].name);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", books[*count].author);

    printf("Enter Category: ");
    scanf(" %[^\n]", books[*count].category);

    printf("Enter Price: ");
    scanf("%f", &books[*count].price);

    printf("Enter Rating: ");
    scanf("%f", &books[*count].rating);

    (*count)++;

    printf("\nBook Added Successfully!\n");
}

void displayBooks(struct Book books[], int count)
{
    int i;

    if(count == 0)
    {
        printf("\nNo Books Available!\n");
        return;
    }

    printf("\n------------- BOOK LIST -------------\n");

    for(i=0;i<count;i++)
    {
        printf("\nBook %d\n", i+1);
        printf("ID : %d\n", books[i].id);
        printf("Name : %s\n", books[i].name);
        printf("Author : %s\n", books[i].author);
        printf("Category : %s\n", books[i].category);
        printf("Price : %.2f\n", books[i].price);
        printf("Rating : %.1f\n", books[i].rating);
    }
}

void searchById(struct Book books[], int count)
{
    int id, i;

    printf("Enter Book ID: ");
    scanf("%d", &id);

    for(i=0;i<count;i++)
    {
        if(books[i].id == id)
        {
            printf("\nBook Found\n");
            printf("Name : %s\n", books[i].name);
            printf("Author : %s\n", books[i].author);
            printf("Category : %s\n", books[i].category);
            printf("Price : %.2f\n", books[i].price);
            printf("Rating : %.1f\n", books[i].rating);
            return;
        }
    }

    printf("Book Not Found!\n");
}

void searchByName(struct Book books[], int count)
{
    char name[50];
    int i;

    printf("Enter Book Name: ");
    scanf(" %[^\n]", name);

    for(i=0;i<count;i++)
    {
        if(strcmp(books[i].name, name)==0)
        {
            printf("\nBook Found\n");
            printf("ID : %d\n", books[i].id);
            printf("Author : %s\n", books[i].author);
            printf("Category : %s\n", books[i].category);
            printf("Price : %.2f\n", books[i].price);
            printf("Rating : %.1f\n", books[i].rating);
            return;
        }
    }

    printf("Book Not Found!\n");
}

void removeBook(struct Book books[], int *count)
{
    int id, i, j;

    printf("Enter Book ID to Remove: ");
    scanf("%d", &id);

    for(i=0;i<*count;i++)
    {
        if(books[i].id == id)
        {
            for(j=i;j<*count-1;j++)
            {
                books[j]=books[j+1];
            }

            (*count)--;

            printf("Book Removed Successfully!\n");
            return;
        }
    }

    printf("Book Not Found!\n");
}

void updateBook(struct Book books[], int count)
{
    int id, i;

    printf("Enter Book ID: ");
    scanf("%d", &id);

    for(i=0;i<count;i++)
    {
        if(books[i].id==id)
        {
            printf("Enter New Price: ");
            scanf("%f",&books[i].price);

            printf("Enter New Rating: ");
            scanf("%f",&books[i].rating);

            printf("Book Updated Successfully!\n");
            return;
        }
    }

    printf("Book Not Found!\n");
}

void showAuthorBooks(struct Book books[], int count)
{
    char author[50];
    int i, found=0;

    printf("Enter Author Name: ");
    scanf(" %[^\n]", author);

    for(i=0;i<count;i++)
    {
        if(strcmp(books[i].author, author)==0)
        {
            printf("\n%s\n", books[i].name);
            found=1;
        }
    }

    if(found==0)
        printf("No Books Found!\n");
}

void showCategoryBooks(struct Book books[], int count)
{
    char category[30];
    int i, found=0;

    printf("Enter Category: ");
    scanf(" %[^\n]", category);

    for(i=0;i<count;i++)
    {
        if(strcmp(books[i].category, category)==0)
        {
            printf("\n%s\n", books[i].name);
            found=1;
        }
    }

    if(found==0)
        printf("No Books Found!\n");
}

void sortByPrice(struct Book books[], int count)
{
    struct Book temp;
    int i, j;

    for(i=0;i<count-1;i++)
    {
        for(j=i+1;j<count;j++)
        {
            if(books[i].price < books[j].price)
            {
                temp=books[i];
                books[i]=books[j];
                books[j]=temp;
            }
        }
    }

    printf("\nBooks Sorted by Price (Highest to Lowest)\n");
    displayBooks(books,count);
}

void sortByRating(struct Book books[], int count)
{
    struct Book temp;
    int i, j;

    for(i=0;i<count-1;i++)
    {
        for(j=i+1;j<count;j++)
        {
            if(books[i].rating < books[j].rating)
            {
                temp=books[i];
                books[i]=books[j];
                books[j]=temp;
            }
        }
    }

    printf("\nBooks Sorted by Rating (Highest to Lowest)\n");
    displayBooks(books,count);
}