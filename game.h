
#ifndef __GAME_H__
#define __GAME_H__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define EASY_COUNT 6//雷的个数创建为6
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

void Initboard(char board[ROWS][COLS], int rows, int cols, char set);
void Displayboard(char board[ROWS][COLS], int row, int col);
void Set_my(char board[ROWS][COLS], int row, int col);
void FindMy(char board[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int GetMyCount(char my[ROWS][COLS], int x, int y);
void Open_up( char my[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y);
int Is_Win(char show[ROWS][COLS], int row, int col);

#endif __GAME_H__