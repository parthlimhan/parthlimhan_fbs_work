#include <stdio.h>
#include <string.h>

#define MAX 100

struct Player
{
    int jerseyNo;
    char name[50];
    int runs;
    int wickets;
    int matches;
};

void addPlayer(struct Player players[], int *count);
void displayPlayers(struct Player players[], int count);
void searchByJersey(struct Player players[], int count);
void searchByName(struct Player players[], int count);
void removePlayer(struct Player players[], int *count);
void updatePlayer(struct Player players[], int count);
void sortByRuns(struct Player players[], int count);
void sortByWickets(struct Player players[], int count);
void top3Runs(struct Player players[], int count);
void top3Wickets(struct Player players[], int count);

int main()
{
    struct Player players[MAX];
    int count = 0;
    int choice;

    do
    {
        printf("\n========== PLAYER MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Player\n");
        printf("2. Remove Player\n");
        printf("3. Search Player by Jersey Number\n");
        printf("4. Search Player by Name\n");
        printf("5. Update Player\n");
        printf("6. Display Players Sorted by Runs\n");
        printf("7. Display Players Sorted by Wickets\n");
        printf("8. Display Top 3 Players by Runs\n");
        printf("9. Display Top 3 Players by Wickets\n");
        printf("10. Display All Players\n");
        printf("11. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addPlayer(players, &count);
                break;

            case 2:
                removePlayer(players, &count);
                break;

            case 3:
                searchByJersey(players, count);
                break;

            case 4:
                searchByName(players, count);
                break;

            case 5:
                updatePlayer(players, count);
                break;

            case 6:
                sortByRuns(players, count);
                break;

            case 7:
                sortByWickets(players, count);
                break;

            case 8:
                top3Runs(players, count);
                break;

            case 9:
                top3Wickets(players, count);
                break;

            case 10:
                displayPlayers(players, count);
                break;

            case 11:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 11);

    return 0;
}

void addPlayer(struct Player players[], int *count)
{
    printf("\nEnter Jersey Number: ");
    scanf("%d", &players[*count].jerseyNo);

    printf("Enter Player Name: ");
    scanf(" %[^\n]", players[*count].name);

    printf("Enter Runs: ");
    scanf("%d", &players[*count].runs);

    printf("Enter Wickets: ");
    scanf("%d", &players[*count].wickets);

    printf("Enter Matches Played: ");
    scanf("%d", &players[*count].matches);

    (*count)++;

    printf("\nPlayer Added Successfully!\n");
}

void displayPlayers(struct Player players[], int count)
{
    int i;

    if(count == 0)
    {
        printf("\nNo Players Available!\n");
        return;
    }

    printf("\n========== PLAYER LIST ==========\n");

    for(i = 0; i < count; i++)
    {
        printf("\nPlayer %d\n", i + 1);
        printf("Jersey Number : %d\n", players[i].jerseyNo);
        printf("Name          : %s\n", players[i].name);
        printf("Runs          : %d\n", players[i].runs);
        printf("Wickets       : %d\n", players[i].wickets);
        printf("Matches       : %d\n", players[i].matches);
    }
}

void searchByJersey(struct Player players[], int count)
{
    int jersey, i;

    printf("Enter Jersey Number: ");
    scanf("%d", &jersey);

    for(i = 0; i < count; i++)
    {
        if(players[i].jerseyNo == jersey)
        {
            printf("\nPlayer Found\n");
            printf("Name : %s\n", players[i].name);
            printf("Runs : %d\n", players[i].runs);
            printf("Wickets : %d\n", players[i].wickets);
            printf("Matches : %d\n", players[i].matches);
            return;
        }
    }

    printf("\nPlayer Not Found!\n");
}

void searchByName(struct Player players[], int count)
{
    char name[50];
    int i;

    printf("Enter Player Name: ");
    scanf(" %[^\n]", name);

    for(i = 0; i < count; i++)
    {
        if(strcmp(players[i].name, name) == 0)
        {
            printf("\nPlayer Found\n");
            printf("Jersey Number : %d\n", players[i].jerseyNo);
            printf("Runs : %d\n", players[i].runs);
            printf("Wickets : %d\n", players[i].wickets);
            printf("Matches : %d\n", players[i].matches);
            return;
        }
    }

    printf("\nPlayer Not Found!\n");
}

void removePlayer(struct Player players[], int *count)
{
    int jersey, i, j;

    printf("Enter Jersey Number to Remove: ");
    scanf("%d", &jersey);

    for(i = 0; i < *count; i++)
    {
        if(players[i].jerseyNo == jersey)
        {
            for(j = i; j < *count - 1; j++)
            {
                players[j] = players[j + 1];
            }

            (*count)--;

            printf("\nPlayer Removed Successfully!\n");
            return;
        }
    }

    printf("\nPlayer Not Found!\n");
}

void updatePlayer(struct Player players[], int count)
{
    int jersey, i;

    printf("Enter Jersey Number: ");
    scanf("%d", &jersey);

    for(i = 0; i < count; i++)
    {
        if(players[i].jerseyNo == jersey)
        {
            printf("Enter New Runs: ");
            scanf("%d", &players[i].runs);

            printf("Enter New Wickets: ");
            scanf("%d", &players[i].wickets);

            printf("Enter New Matches Played: ");
            scanf("%d", &players[i].matches);

            printf("\nPlayer Updated Successfully!\n");
            return;
        }
    }

    printf("\nPlayer Not Found!\n");
}

void sortByRuns(struct Player players[], int count)
{
    struct Player temp;
    int i, j;

    for(i = 0; i < count - 1; i++)
    {
        for(j = i + 1; j < count; j++)
        {
            if(players[i].runs < players[j].runs)
            {
                temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }

    printf("\nPlayers Sorted by Runs (Highest to Lowest)\n");
    displayPlayers(players, count);
}

void sortByWickets(struct Player players[], int count)
{
    struct Player temp;
    int i, j;

    for(i = 0; i < count - 1; i++)
    {
        for(j = i + 1; j < count; j++)
        {
            if(players[i].wickets < players[j].wickets)
            {
                temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }

    printf("\nPlayers Sorted by Wickets (Highest to Lowest)\n");
    displayPlayers(players, count);
}

void top3Runs(struct Player players[], int count)
{
    int i;

    sortByRuns(players, count);

    printf("\n========== TOP 3 RUN SCORERS ==========\n");

    for(i = 0; i < count && i < 3; i++)
    {
        printf("\n%d. %s", i + 1, players[i].name);
        printf("\nRuns : %d\n", players[i].runs);
    }
}

void top3Wickets(struct Player players[], int count)
{
    int i;

    sortByWickets(players, count);

    printf("\n========== TOP 3 WICKET TAKERS ==========\n");

    for(i = 0; i < count && i < 3; i++)
    {
        printf("\n%d. %s", i + 1, players[i].name);
        printf("\nWickets : %d\n", players[i].wickets);
    }
}