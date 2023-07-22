#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define ROWs ROW+2
#define COLs COL+2
#define EASY_COUNT 10

void InitBoard(char board[ROWs][COLs], int rows, int cols, char sign);

void DisplayBoard(char board[ROWs][COLs], int row, int col);

void SetMine(char board[ROWs][COLs], int row, int col);

void FindMine(char mine[ROWs][COLs], char show[ROWs][COLs], int row, int col);