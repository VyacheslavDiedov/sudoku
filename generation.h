#ifndef GENERATION_H_INCLUDED
#define GENERATION_H_INCLUDED

int i, j, n, count, poz_x = 18, poz_y = 6, arrint[3];;

enum {
Easy = 50,
Medium = 38 ,
Hard = 30,
Expert = 25
}Nicety;

void generationSudoku ( int sudoku[9][9] );//процедура для пошуку помилок

void cleanSudoku ( int sudoku[9][9] ); //первоначальна судоку

void printSudoku ( int sudoku[9][9] ); //вивод на екран

int checkForNumberRepeats( int sudoku[9][9], int i, int j, int num ); //перевірка числа на вірність

void mixTheArray ( int sudoku[9][9] ); //перемішати масив

void mixHorizontally ( int sudoku[9][9] );//мішає по горизонталі

void mixVertically ( int sudoku[9][9] );//мішає по вертикалі

int controlCheck ( int sudoku[9][9]); //контрольна перевірка масива на вірність

void sudokuItself ( int game[9][9], int sudoku[9][9], int complication );//сама гра

void copyNumber ( int game[9][9], int sudoku[9][9], int complication );//копіювання чисел в масив гри

void gotoxy(int poz_x, int poz_y);//переміщення курсора

int goarray( int arrint[3]);//переміщення по масиву

int console(int game[9][9], int sudoku[9][9]);//меню гри

void advertisingIT ();//верхній колонтітул

void graphics ( char arr[9][9], int i );//виведення на екран табличкою

int intInChar ( char arr[9][9],int sudoku[9][9], int count ); //переведення чисельного масива в
                                                              // масив символів для коректного виводу на екран

void rules();//правила гри

int controlCheckOnline ( int sudoku[9][9] ); //перевіряє масив на відсутність збігів чисел

void youWin(); //екран виграшу

void youLose(); //екран програшу

int tryAgain(); //повтор гри

void gameOver(); //прощання

void nullifiesTheArray( int sudoku[9][9] ); //обнулення масиву

#endif
