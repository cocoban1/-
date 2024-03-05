#ifndef HOMEWORK13_GAME_H
#define HOMEWORK13_GAME_H
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EAZY_COUNT 10

void initBoard(char board[ROWS][COLS] , int rows , int cols, char set);
void displayBoard(char board[ROWS][COLS] , int row , int col);
void setMine(char board[ROWS][COLS] , int rows , int cols);
void findMine(char mine[ROWS][COLS] , char show[ROWS][COLS] , int row , int col);
#endif //HOMEWORK13_GAME_H
