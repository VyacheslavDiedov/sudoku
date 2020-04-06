#ifndef GENERATION_H_INCLUDED
#define GENERATION_H_INCLUDED

int i, j, n, count, poz_x = 18, poz_y = 6, arrint[3];;

enum {
Easy = 50,
Medium = 38 ,
Hard = 30,
Expert = 25
}Nicety;

void generationSudoku ( int sudoku[9][9] );//��������� ��� ������ �������

void cleanSudoku ( int sudoku[9][9] ); //������������� ������

void printSudoku ( int sudoku[9][9] ); //����� �� �����

int checkForNumberRepeats( int sudoku[9][9], int i, int j, int num ); //�������� ����� �� ������

void mixTheArray ( int sudoku[9][9] ); //��������� �����

void mixHorizontally ( int sudoku[9][9] );//��� �� ����������

void mixVertically ( int sudoku[9][9] );//��� �� ��������

int controlCheck ( int sudoku[9][9]); //���������� �������� ������ �� ������

void sudokuItself ( int game[9][9], int sudoku[9][9], int complication );//���� ���

void copyNumber ( int game[9][9], int sudoku[9][9], int complication );//��������� ����� � ����� ���

void gotoxy(int poz_x, int poz_y);//���������� �������

int goarray( int arrint[3]);//���������� �� ������

int console(int game[9][9], int sudoku[9][9]);//���� ���

void advertisingIT ();//������ ���������

void graphics ( char arr[9][9], int i );//��������� �� ����� ���������

int intInChar ( char arr[9][9],int sudoku[9][9], int count ); //����������� ���������� ������ �
                                                              // ����� ������� ��� ���������� ������ �� �����

void rules();//������� ���

int controlCheckOnline ( int sudoku[9][9] ); //�������� ����� �� ��������� ���� �����

void youWin(); //����� �������

void youLose(); //����� ��������

int tryAgain(); //������ ���

void gameOver(); //��������

void nullifiesTheArray( int sudoku[9][9] ); //��������� ������

#endif
