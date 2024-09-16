#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void printTable(char table[3][3])
{
    printf("\n");
    printf(" %c | %c | %c \n", table[0][0], table[0][1], table[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", table[1][0], table[1][1], table[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", table[2][0], table[2][1], table[2][2]);
    printf("\n");
}

// Returns 0 or 2 randomically. Used by bot to select a corner to mark
int sortCorner();

int main()
{
    char table[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    char whoStarts;
    char dificulty;

    int botX;
    int botY;

    srand(time(0));

    printf("Who starts, me or you? [M/Y]: ");
    scanf("%s", &whoStarts);
    
    if (whoStarts ==  'Y')
    {
        printf("Possible or impossible? [P/I]: ");
        scanf("%s", &dificulty);

        if (dificulty == 'I')
        {
            botX = sortCorner();
            botY = sortCorner();
        } 
        else 
        {
            botX = rand() % 3;
            botY = rand() % 3;
        }

        table[botY][botX] = 'X';
    }
    
    printTable(table);

    while(1)
    {
    } 

    return 0;
}

int sortCorner()
{
    if (rand() %2) return 0;
    else return 2;
}