#ifndef __GAME_H__
#define __GAME_H__


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define ROW 3
#define COL 3
void Initb(char board[ROW][COL], int row, int col);
void Showb(char board[ROW][COL], int row, int col);
void P1_Move(char board[ROW][COL], int row, int col);
void Computer_Move(char board[ROW][COL], int row, int col);
char Is_Win(char board[ROW][COL], int row, int col);
int Is_Full(char board[ROW][COL], int row, int col);





#endif __GAME_H__