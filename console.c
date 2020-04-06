#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include "generation.h"



int console (int game[9][9], int sudoku[9][9])
{
    int complication, temp;

    while(1){
    do
    {
        advertisingIT ();
        printf("\n\t\t\t     Hello!!!\n\t\t     Welcome to game sudoku!!!\n");
        printf("\n\t\t\t    1. New Game.\n\t\t\t    2. How to Play.\n\t\t\t    3. Exit.\n\t\t\t");
        printf("\n\t\t        Your choice - ");
        scanf("%i", &temp);

        system("cls");
    }
    while(temp >= 4 || temp < 1 );

    switch(temp)
    {
    case 1:

        do
        {
            advertisingIT ();
            printf("\n\t\t\t    New Game:\n\n\t\t\t    1. Easy\n\t\t\t    2. Medium\n\t\t\t    3. Hard\n\t\t\t    "
                   "4. Expert\n\t\t\t    5. Back\n ");
            printf("\n\t\t        Level of difficulty - ");
            scanf("%i", &temp);
            system("cls");
        }
        while(temp >= 6 || temp < 1 );

        switch(temp)
        {
        case 1:
            complication = Easy;
            break;
        case 2:
            complication = Medium;
            break;
        case 3:
            complication = Hard;
            break;
        case 4:
            complication = Expert;
            break;
        case 5:
            continue;
        }
        break;
    case 2:
        advertisingIT ();
        rules();
        continue;
    case 3:
        return;
    }
    sudokuItself ( game, sudoku, complication );
    return 0;
    }
}

