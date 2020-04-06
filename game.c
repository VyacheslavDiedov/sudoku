#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "generation.h"


void sudokuItself ( int game[9][9], int sudoku[9][9], int complication )
{
    srand(time(NULL));
    copyNumber ( game, sudoku, complication );
    printSudoku ( game );

}

void copyNumber ( int game[9][9], int sudoku[9][9], int complication )
{
    int rand1, rand2;
    for( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 9 ; j++)
        {
            do
            {
                rand1 = rand()% 9;
            }
            while(game[j][rand1] != 0);
            game[j][rand1] = sudoku[j][rand1];
        }
    }
    for ( i = 0; i < ( complication - 18 ); i++)
    {
        do
        {
            rand1 = rand()% 9;
            rand2 = rand()% 9;
        }
        while(game[rand1][rand2] != 0);
        game[rand1][rand2] = sudoku[rand1][rand2];
    }
}

