#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "generation.h"

void printSudoku ( int game[9][9] )
{
    char arr[9][9];

    do
    {
        advertisingIT ();
        intInChar ( arr, game, count );
        i = controlCheckOnline ( game );
        graphics ( arr, i );
        j = goarray(arrint);
        game[((arrint[2] - 6) / 2)][((arrint[1] - 18) / 4)] = arrint[0];
        system("cls");
        if ( j == 1)
            return;
        count = 0;
        count =  intInChar ( arr, game, count );
    }
    while( count == 1 );
    i = controlCheck ( game );
    if ( i == 1)
    {
        youWin();
    }
    else
    {
        youLose();
        graphics ( arr, i );
    }
}

void advertisingIT ()
{
    printf("\t\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
           "\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printf("\t\t\xBA       IT-Academy Vinnytsia         \xBA\n");
    printf("\t\t\xBA                                    \xBA\n");
    printf("\t\t\xBA        Vyacheslav Diedov           \xBA\n");
    printf("\t\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
           "\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
}

void rules()
{

    printf("  \xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
           "\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
           "\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
           "\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printf("  \xBA                         RULES SUDOKU                           \xBA\n");
    printf("  \xBA                                                                \xBA\n");
    printf("  \xBA        A sudoku puzzle begins with a grid in which some of the \xBA\n");
    printf("  \xBA numbers are already in place, depending on game difficulty.    \xBA\n");
    printf("  \xBA                                                                \xBA\n");
    printf("  \xBA        A completed puzzle is one where each number from 1 to 9 \xBA\n");
    printf("  \xBA nappears only once in each rows, columns and blocks.           \xBA\n");
    printf("  \xBA                                                                \xBA\n");
    printf("  \xBA        Study the gril to find the numbers that might fit into  \xBA\n");
    printf("  \xBA each cell.                                                     \xBA\n");
    printf("  \xBA                                                                \xBA\n");
    printf("  \xBA                press any key to continue                       \xBA\n");
    printf("  \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
           "\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
           "\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
           "\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
    getch();
    system("cls");
}

void graphics ( char arr[9][9], int i )
{
    printf("\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");

    printf("\t\t\xB2 %c \xB3 %c \xB3 %c \xBA %c \xB3 %c \xB3 %c \xBA %c \xB3 %c \xB3 %c \xB2"
           "\n", arr[0][0], arr[0][1], arr[0][2], arr[0][3], arr[0][4], arr[0][5], arr[0][6], arr[0][7], arr[0][8] );
    printf("\t\t\xB2\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xD7\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xD7"
           "\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xB2\n");
    printf("\t\t\xB2 %c \xB3 %c \xB3 %c \xBA %c \xB3 %c \xB3 %c \xBA %c \xB3 %c \xB3 %c \xB2"
           "\n", arr[1][0], arr[1][1], arr[1][2], arr[1][3], arr[1][4], arr[1][5], arr[1][6], arr[1][7], arr[1][8]);
    printf("\t\t\xB2\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xD7\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xD7"
           "\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xB2\n");
    printf("\t\t\xB2 %c \xB3 %c \xB3 %c \xBA %c \xB3 %c \xB3 %c \xBA %c \xB3 %c \xB3 %c \xB2"
           "\n", arr[2][0], arr[2][1], arr[2][2], arr[2][3], arr[2][4], arr[2][5], arr[2][6], arr[2][7], arr[2][8]);
    printf("\t\t\xB2\xCD\xCD\xCD\xD8\xCD\xCD\xCD\xD8\xCD\xCD\xCD\xCE\xCD\xCD\xCD\xD8\xCD\xCD\xCD\xD8\xCD\xCD\xCD\xCE"
           "\xCD\xCD\xCD\xD8\xCD\xCD\xCD\xD8\xCD\xCD\xCD\xB2\n");

    printf("\t\t\xB2 %c \xB3 %c \xB3 %c \xBA %c \xB3 %c \xB3 %c \xBA %c \xB3 %c \xB3 %c \xB2"
           "\n", arr[3][0], arr[3][1], arr[3][2], arr[3][3], arr[3][4], arr[3][5], arr[3][6], arr[3][7], arr[3][8]);
    printf("\t\t\xB2\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xD7\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xD7"
           "\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xB2\n");
    printf("\t\t\xB2 %c \xB3 %c \xB3 %c \xBA %c \xB3 %c \xB3 %c \xBA %c \xB3 %c \xB3 %c \xB2"
           "\n", arr[4][0], arr[4][1], arr[4][2], arr[4][3], arr[4][4], arr[4][5], arr[4][6], arr[4][7], arr[4][8]);
    printf("\t\t\xB2\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xD7\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xD7"
           "\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xB2\n");
    printf("\t\t\xB2 %c \xB3 %c \xB3 %c \xBA %c \xB3 %c \xB3 %c \xBA %c \xB3 %c \xB3 %c \xB2"
           "\n", arr[5][0], arr[5][1], arr[5][2], arr[5][3], arr[5][4], arr[5][5], arr[5][6], arr[5][7], arr[5][8]);
    printf("\t\t\xB2\xCD\xCD\xCD\xD8\xCD\xCD\xCD\xD8\xCD\xCD\xCD\xCE\xCD\xCD\xCD\xD8\xCD\xCD\xCD\xD8\xCD\xCD\xCD\xCE"
           "\xCD\xCD\xCD\xD8\xCD\xCD\xCD\xD8\xCD\xCD\xCD\xB2\n");


    printf("\t\t\xB2 %c \xB3 %c \xB3 %c \xBA %c \xB3 %c \xB3 %c \xBA %c \xB3 %c \xB3 %c \xB2"
           "\n", arr[6][0], arr[6][1], arr[6][2], arr[6][3], arr[6][4], arr[6][5], arr[6][6], arr[6][7], arr[6][8]);
    printf("\t\t\xB2\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xD7\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xD7"
           "\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xB2\n");
    printf("\t\t\xB2 %c \xB3 %c \xB3 %c \xBA %c \xB3 %c \xB3 %c \xBA %c \xB3 %c \xB3 %c \xB2"
           "\n", arr[7][0], arr[7][1], arr[7][2], arr[7][3], arr[7][4], arr[7][5], arr[7][6], arr[7][7], arr[7][8]);
    printf("\t\t\xB2\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xD7\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xD7"
           "\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xB2\n");
    printf("\t\t\xB2 %c \xB3 %c \xB3 %c \xBA %c \xB3 %c \xB3 %c \xBA %c \xB3 %c \xB3 %c \xB2"
           "\n", arr[8][0], arr[8][1], arr[8][2], arr[8][3], arr[8][4], arr[8][5], arr[8][6], arr[8][7], arr[8][8]);

    printf("\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");

    if ( i == 1)
    {
        printf("\t\t\t\xB2       True        \xB2\n\t\t\t\xB2 Click Esc to exit \xB2\n\t\t\t\xB2      SUDOKU       \xB2\n\t\t\t"
               "\xB2  version A-19.1   \xB2\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
               "\xB2\xB2");
    }
    else
    {
        printf("\t\t\t\xB2       False       \xB2\n\t\t\t\xB2 Click Esc to exit \xB2\n\t\t\t\xB2      SUDOKU       \xB2\n\t\t\t"
               "\xB2  version A-19.1   \xB2\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
               "\xB2\xB2");
    }
}

int intInChar ( char arr[9][9],int game[9][9], int count )
{
    for ( i = 0; i < 9; i++)
    {
        for ( j = 0; j < 9; j++)
        {
            if (game[i][j] == 0)
            {
                arr[i][j] = ' ';
                count = 1;
            }
            if (game[i][j] == 1)
                arr[i][j] = '1';
            if (game[i][j] == 2)
                arr[i][j] = '2';
            if (game[i][j] == 3)
                arr[i][j] = '3';
            if (game[i][j] == 4)
                arr[i][j] = '4';
            if (game[i][j] == 5)
                arr[i][j] = '5';
            if (game[i][j] == 6)
                arr[i][j] = '6';
            if (game[i][j] == 7)
                arr[i][j] = '7';
            if (game[i][j] == 8)
                arr[i][j] = '8';
            if (game[i][j] == 9)
                arr[i][j] = '9';
        }
    }
    return count;
}

void youWin()
{
    advertisingIT ();

    printf("\n\n\n\t\t\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0"
           "\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\n");
    printf("\t\t\xB0                                    \xB0\n");
    printf("\t\t\xB0          Congratulations!          \xB0\n");
    printf("\t\t\xB0                                    \xB0\n");
    printf("\t\t\xB0              You Win!              \xB0\n");
    printf("\t\t\xB0                                    \xB0\n");
    printf("\t\t\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0"
           "\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\n");
}

void youLose()
{
    printf("\t\t\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0"
           "\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\n");
    printf("\t\t\xB0                                    \xB0\n");
    printf("\t\t\xB0              GAME OVER             \xB0\n");
    printf("\t\t\xB0                                    \xB0\n");
    printf("\t\t\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0"
           "\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\n\n");
}

int tryAgain()
{
    printf("\n\n\n\t\t      Do you want to try again?\n\t\t\t      1. Yes\n\t\t\t      2. No\n\n\t\t\t  Your choice - ");
    scanf("%i", &i);
    return i;
}

void gameOver()
{
    printf("\n\t\t\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0"
           "\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\n");
    printf("\t\t\xB0                                    \xB0\n");
    printf("\t\t\xB0         Have a nice day!           \xB0\n");
    printf("\t\t\xB0                                    \xB0\n");
    printf("\t\t\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0"
           "\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\n");
}
