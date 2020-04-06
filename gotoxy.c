#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "generation.h"

void gotoxy(int poz_x, int poz_y)
{
    static HANDLE h = NULL;
    if(!h)
        h = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD c = { poz_x, poz_y };
    SetConsoleCursorPosition(h,c);
}

int goarray( int arrint[3])
{
    int Keys;
    gotoxy(poz_x,poz_y);

    while(1)
    {
        Keys = getch();
        switch (Keys)
        {
        case 77:
            poz_x+=4;
            if (poz_x > 51 )
                poz_x = 50;
            gotoxy(poz_x,poz_y);
            break;
        case 75:
            poz_x-=4;
            if (poz_x < 18 )
                poz_x = 18;
            gotoxy(poz_x,poz_y);
            break;
        case 72:
            poz_y-=2;
            if (poz_y < 6 )
                poz_y = 6;
            gotoxy(poz_x,poz_y);
            break;
        case 80:
            poz_y+=2;
            if (poz_y > 23 )
                poz_y = 22;
            gotoxy(poz_x,poz_y);
            break;
        case 49:
            arrint[0] = 1, arrint[1] = poz_x, arrint[2] = poz_y;
            poz_x +=4;
            if (poz_x > 51 )
                poz_x = 18, poz_y +=2;
            if (poz_y > 23 )
                poz_x = 18, poz_y =6;
            gotoxy(poz_x,poz_y);
            return 0;
        case 48:
            arrint[0] = 0, arrint[1] = poz_x, arrint[2] = poz_y;
            poz_x +=4;
            if (poz_x > 51 )
                poz_x = 18, poz_y +=2;
            if (poz_y > 23 )
                poz_x = 18, poz_y =6;
            gotoxy(poz_x,poz_y);
            return 0;
        case 50:
            arrint[0] = 2, arrint[1] = poz_x, arrint[2] = poz_y;
            poz_x +=4;
            if (poz_x > 51 )
                poz_x = 18, poz_y +=2;
            if (poz_y > 23 )
                poz_x = 18, poz_y =6;
            gotoxy(poz_x,poz_y);
            return 0;
        case 51:
            arrint[0] = 3, arrint[1] = poz_x, arrint[2] = poz_y;
            poz_x +=4;
            if (poz_x > 51 )
                poz_x = 18, poz_y +=2;
            if (poz_y > 23 )
                poz_x = 18, poz_y =6;
            gotoxy(poz_x,poz_y);
            return 0;
        case 52:
            arrint[0] = 4, arrint[1] = poz_x, arrint[2] = poz_y;
            poz_x +=4;
            if (poz_x > 51 )
                poz_x = 18, poz_y +=2;
            if (poz_y > 23 )
                poz_x = 18, poz_y =6;
            gotoxy(poz_x,poz_y);
            return 0;
        case 53:
            arrint[0] = 5, arrint[1] = poz_x, arrint[2] = poz_y;
            poz_x +=4;
            if (poz_x > 51 )
                poz_x = 18, poz_y +=2;
            if (poz_y > 23 )
                poz_x = 18, poz_y =6;
            gotoxy(poz_x,poz_y);
            return 0;
        case 54:
            arrint[0] = 6, arrint[1] = poz_x, arrint[2] = poz_y;
            poz_x +=4;
            if (poz_x > 51 )
                poz_x = 18, poz_y +=2;
            if (poz_y > 23 )
                poz_x = 18, poz_y =6;
            gotoxy(poz_x,poz_y);
            return 0;
        case 55:
            arrint[0] = 7, arrint[1] = poz_x, arrint[2] = poz_y;
            poz_x +=4;
            if (poz_x > 51 )
                poz_x = 18, poz_y +=2;
            if (poz_y > 23 )
                poz_x = 18, poz_y =6;
            gotoxy(poz_x,poz_y);
            return 0;
        case 56:
            arrint[0] = 8, arrint[1] = poz_x, arrint[2] = poz_y;
            poz_x +=4;
            if (poz_x > 51 )
                poz_x = 18, poz_y +=2;
            if (poz_y > 23 )
                poz_x = 18, poz_y =6;
            gotoxy(poz_x,poz_y);
            return 0;
        case 57:
            arrint[0] = 9, arrint[1] = poz_x, arrint[2] = poz_y;
            poz_x +=4;
            if (poz_x > 51 )
                poz_x = 18, poz_y +=2;
            if (poz_y > 23 )
                poz_x = 18, poz_y =6;
            gotoxy(poz_x,poz_y);
            return 0;
        case 13:
            scanf("%i", &i);
            arrint[0] = i, arrint[1] = poz_x, arrint[2] = poz_y;
            poz_x +=4;
            if (poz_x > 51 )
                poz_x = 18, poz_y +=2;
            if (poz_y > 23 )
                poz_x = 18, poz_y =6;
            gotoxy(poz_x,poz_y);
            return 0;
        case 27:
            return 1;
        }
    }
    getch();
}

