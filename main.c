#include <stdio.h>
#include <stdbool.h>

void printTable(char*);

int main()
{
    char table[9][2] = {
        "A1", "B1", "C1",
        'A2', "B2", "C2",
        'A3', "B3", "B4"
    };

    while(1)
    {
        
    }

    return 0;
}

void printTable(char * table)
{
    for (int i = 0; i < 9; i++)
    {
        printf("%s", table[i]);
    }
}