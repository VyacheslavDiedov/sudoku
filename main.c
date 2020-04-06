#include <stdio.h>
#include <stdlib.h>
#include "generation.h"
#include "generation.c"
#include "game.c"
#include "gotoxy.c"
#include "console.c"
#include "print.c"



int main()
{
    int temp;
    int sudoku[9][9] = {};
    int game[9][9] = {};
    do
    {
        nullifiesTheArray( sudoku );
        generationSudoku ( sudoku );
        nullifiesTheArray( game );
        console ( game, sudoku );
        temp = tryAgain();
        system("cls");
    }while ( temp == 1);
    gameOver();
    return 0;
}
