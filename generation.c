#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "generation.h"

void generationSudoku ( int sudoku[9][9] )
{
    srand(time(NULL));
    nullifiesTheArray( sudoku );
    cleanSudoku ( sudoku );
    mixTheArray ( sudoku );
    controlCheck ( sudoku );
}

void cleanSudoku ( int sudoku[9][9])
{
    int num = 1, temp;
    for ( j = 0; j < 9; j++ )
    {
        i = 0;
        while ( i < 9 )
        {
            temp = checkForNumberRepeats ( sudoku, i, j, num);
            if (temp != 0 )
            {
                sudoku[i][j] = num;
                i++;
            }
            num+=2;
            if ( num == 10)
                num =1;
            if ( num == 11)
                num = 0;
        }
    }
}

int checkForNumberRepeats(int sudoku[9][9], int i, int j, int num)
{
    int hor, ver, temp, temp1, i1, j1;
    for (hor = 0, ver = 0; hor < 9 && ver < 9; hor++, ver++)
    {
        if ( hor == j )
            hor++;
        if ( ver == i )
            ver++;
        if ( sudoku[i][hor] == num || sudoku[ver][j] == num )
            return 0;
    }
    if ( i >= 0 && i <= 2)
    {
        if ( j >= 0 && j <= 2)
            i1 = 0, j1 = 0;
        if ( j >= 3 && j <= 5)
            i1 = 0, j1 = 3;
        if ( j >= 6 && j <= 8)
            i1 = 0, j1 = 6;
    }
    if ( i >= 3 && i <= 5)
    {
        if ( j >= 0 && j <= 2)
            i1 = 3, j1 = 0;
        if ( j >= 3 && j <= 5)
            i1 = 3, j1 = 3;
        if ( j >= 6 && j <= 8)
            i1 = 3, j1 = 6;
    }
    if ( i >= 6 && i <= 8)
    {
        if ( j >= 0 && j <= 2)
            i1 = 6, j1 = 0;
        if ( j >= 3 && j <= 5)
            i1 = 6, j1 = 3;
        if ( j >= 6 && j <= 8)
            i1 = 6, j1 = 6;
    }

    for ( temp = i1; temp < (i1 + 3); temp++)
    {

        for ( temp1 = j1 ; temp1 < (j1 + 3); temp1++ )
        {
            if (temp1 == j)
                temp1++;
            if (temp1 == (j1 + 3))
                break;
            if ( sudoku[temp][temp1] == num)
                return 0;
        }
    }
    return num;
}

void mixTheArray ( int sudoku [9][9] )
{
    n = 1 + rand()% 2;
    if ( n == 1)
    {
        mixHorizontally ( sudoku );
        mixVertically ( sudoku );
    }
    else
    {
        mixVertically ( sudoku );
        mixHorizontally ( sudoku );
    }
}

void mixHorizontally ( int sudoku[9][9] )
{
    int sector1, sector2, rand1, rand2, rand3, temp, n1;
    for ( count = 0; count < 9; count++ )
    {
        do
        {
            sector1 = 1 + rand()% 3;
            sector2 = 1 + rand()% 3;
            rand1 = rand()% 3;
            rand2 = rand()% 3;
            rand3 = rand()% 3;
        }
        while( sector1 == sector2 || rand1 == rand2 || rand2 == rand3 || rand1 == rand3 );
        n = 0, n1 = 0;
        if ( (sector1 == 1 && sector2 == 2) || (sector2 == 2 && sector1 == 1))
             n1 = 0, n = 3;
        if ( (sector1 == 1 && sector2 == 3) || (sector1 == 3 && sector2 == 1))
             n1 = 0, n = 6;
        if ( (sector1 == 2 && sector2 == 3) || (sector1 == 3 && sector2 == 2))
            n = 6, n1 = 3;
        for ( i = 0 ; i < 9; i++)
        {
            temp = sudoku[rand1 + n1][i];

            sudoku[rand1 + n1][i] = sudoku[rand2 + n][i];
            sudoku[rand2 + n][i] = temp;
            temp = sudoku[rand2 + n1][i];
            sudoku[rand2 + n1][i] = sudoku[rand3 + n][i];
            sudoku[rand3 + n][i] = temp;
            temp = sudoku[rand3 + n1][i];
            sudoku[rand3 + n1][i] = sudoku[rand1 + n][i];
            sudoku[rand1 + n][i] = temp;
        }
    }
}

void mixVertically ( int sudoku[9][9] )
{
    int sector1, sector2, rand1, rand2, rand3, temp, n1;
    for ( count = 0; count < 9; count++ )
    {
        do
        {
            sector1 = 1 + rand()% 3;
            sector2 = 1 + rand()% 3;
            rand1 = rand()% 3;
            rand2 = rand()% 3;
            rand3 = rand()% 3;
        }
        while(sector1 == sector2 || rand1 == rand2 || rand2 == rand3 || rand1 == rand3 );
               n = 0, n1 = 0;
        if ( (sector1 == 1 && sector2 == 2) || (sector2 == 2 && sector1 == 1))
        {
            n1 = 0, n = 3;
        }
        if (( sector1 == 1 && sector2 == 3 ) || (sector1 == 3 && sector2 == 1))
        {
            n1 = 0, n = 6;
        }
        if ( (sector1 == 2 && sector2 == 3) || (sector1 == 3 && sector2 == 2))
        {
            n = 6, n1 = 3;
        }
        for ( i = 0 ; i < 9; i++)
        {
            temp = sudoku[i][rand1 + n1];
            sudoku[i][rand1 + n1] = sudoku[i][rand2 + n];
            sudoku[i][rand2 + n] = temp;
            temp = sudoku[i][rand2 + n1];
            sudoku[i][rand2 + n1] = sudoku[i][rand3 + n];
            sudoku[i][rand3 + n] = temp;
            temp = sudoku[i][rand3 + n1];
            sudoku[i][rand3 + n1] = sudoku[i][rand1 + n];
            sudoku[i][rand1 + n] = temp;
        }
    }
}

int controlCheck ( int sudoku[9][9] )
{
    for ( i = 0; i < 9; i++ )
    {
        for ( j = 0; j < 9; j++)
        {
            n = sudoku[i][j];
            n = checkForNumberRepeats ( sudoku, i, j, n);
            if ( n == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int controlCheckOnline ( int sudoku[9][9] )
{
    for ( i = 0; i < 9; i++ )
    {
        for ( j = 0; j < 9; j++)
        {

            n = sudoku[i][j];
            if( n != 0 )
            {
                n = checkForNumberRepeats ( sudoku, i, j, n);
                if ( n == 0)
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

void nullifiesTheArray( int sudoku[9][9] )
{
    for ( i = 0; i < 9; i++ )
    {
        for ( j = 0; j < 9; j++)
        {
            sudoku[i][j] = 0;
        }
    }
}
