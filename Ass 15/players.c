#include<stdio.h>
typedef struct Player
{
    char name[20];
    int matches;
    int runs;
    int wickets;
}Player;

void accept(Player p[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Player %d\n", i + 1);
        printf("Name: ");
        scanf("%s", p[i].name);

        printf("Matches Played: ");
        scanf("%d", &p[i].matches);

        printf("Runs: ");
        scanf("%d", &p[i].runs);

        printf("Wickets: ");
        scanf("%d", &p[i].wickets);
    }
}

void display(Player p[], int n)
{
    int i;

    printf("\nPlayer Details\n");

    for(i = 0; i < n; i++)
    {
        printf("\nPlayer %d\n", i + 1);
        printf("Name: %s\n", p[i].name);
        printf("Matches Played: %d\n", p[i].matches);
        printf("Runs: %d\n", p[i].runs);
        printf("Wickets: %d\n", p[i].wickets);
    }
}

void maxRuns(Player p[], int n)
{
    int i, max = 0;

    for(i = 1; i < n; i++)
    {
        if(p[i].runs > p[max].runs)
        {
            max = i;
        }
    }

    printf("\nPlayer with Maximum Runs\n");
    printf("Name: %s\n", p[max].name);
    printf("Matches Played: %d\n", p[max].matches);
    printf("Runs: %d\n", p[max].runs);
    printf("Wickets: %d\n", p[max].wickets);
}

void maxWickets(Player p[], int n)
{
    int i, max = 0;

    for(i = 1; i < n; i++)
    {
        if(p[i].wickets > p[max].wickets)
        {
            max = i;
        }
    }

    printf("\nPlayer with Maximum Wickets\n");
    printf("Name: %s\n", p[max].name);
    printf("Matches Played: %d\n", p[max].matches);
    printf("Runs: %d\n", p[max].runs);
    printf("Wickets: %d\n", p[max].wickets);
}

int main()
{
    Player p[10];
	accept(p, 10);
	display(p, 10);
	maxRuns(p, 10);
	maxWickets(p, 10);

    return 0;
}