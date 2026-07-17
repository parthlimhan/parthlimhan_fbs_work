#include<stdio.h>
#include<string.h>

typedef struct Movie
{
    char title[50];
    char director[50];
    int year;
    char genre[30];
}Movie;

void accept(Movie m[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Movie %d\n", i + 1);

        getchar();   // Clear newline

        printf("Title: ");
        fgets(m[i].title, sizeof(m[i].title), stdin);
        m[i].title[strcspn(m[i].title, "\n")] = '\0';

        printf("Director: ");
        fgets(m[i].director, sizeof(m[i].director), stdin);
        m[i].director[strcspn(m[i].director, "\n")] = '\0';

        printf("Release Year: ");
        scanf("%d", &m[i].year);

        getchar();

        printf("Genre: ");
        fgets(m[i].genre, sizeof(m[i].genre), stdin);
        m[i].genre[strcspn(m[i].genre, "\n")] = '\0';
    }
}

void display(Movie m[], int n)
{
    int i;

    printf("\nMovie Details\n");

    for(i = 0; i < n; i++)
    {
        printf("\nMovie %d\n", i + 1);
        printf("Title: %s\n", m[i].title);
        printf("Director: %s\n", m[i].director);
        printf("Release Year: %d\n", m[i].year);
        printf("Genre: %s\n", m[i].genre);
    }
}

void search(Movie m[], int n)
{
    char title[50];
    int i, found = 0;

    getchar();

    printf("\nEnter movie title to search: ");
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0';

    for(i = 0; i < n; i++)
    {
        if(strcmp(m[i].title, title) == 0)
        {
            printf("\nMovie Found\n");
            printf("Title: %s\n", m[i].title);
            printf("Director: %s\n", m[i].director);
            printf("Release Year: %d\n", m[i].year);
            printf("Genre: %s\n", m[i].genre);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Movie not found.\n");
    }
}

void update(Movie m[], int n)
{
    char title[50];
    int i, found = 0;

    getchar();

    printf("\nEnter movie title to update: ");
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0';

    for(i = 0; i < n; i++)
    {
        if(strcmp(m[i].title, title) == 0)
        {
            printf("Enter new Director: ");
            fgets(m[i].director, sizeof(m[i].director), stdin);
            m[i].director[strcspn(m[i].director, "\n")] = '\0';

            printf("Enter new Release Year: ");
            scanf("%d", &m[i].year);

            getchar();

            printf("Enter new Genre: ");
            fgets(m[i].genre, sizeof(m[i].genre), stdin);
            m[i].genre[strcspn(m[i].genre, "\n")] = '\0';

            found = 1;
            printf("\nMovie updated successfully.\n");
            break;
        }
    }

    if(found == 0)
    {
        printf("Movie not found.\n");
    }
}

int main()
{
    int n;

    printf("Enter number of movies: ");
    scanf("%d", &n);

    Movie m[n];
	accept(m, n);
	display(m, n);
	search(m, n);
	update(m, n);

    printf("\nUpdated Movie List\n");
    display(m, n);

    return 0;
}