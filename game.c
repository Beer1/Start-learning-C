#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void Initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	memset(&board[0][0], set, rows*cols*sizeof(board[0][0]));

}


void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("--------------------\n");
	for(i=0; i<=col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for(i=1; i<=row; i++)
	{
		printf("%d ", i);
		for(j=1; j<=col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("--------------------\n");

}

void Set_my(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while(count)
	{
		int x = rand()%row+1;
		int y = rand()%col+1;
		if(board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int Is_Win(char show[ROWS][COLS], int row, int col)//判断雷什么时候排完
{
	int count = 0;
	int i = 0;
	int j = 0;
	for(i=1; i<=row; i++)
	{
		for(j=1; j<=col; j++)
		{
			if(show[i][j] == '*')
			{
				count++;
			}
		}
	}
	return count;
}


void FindMy(char my[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int k = 0;
	int l = 0;
	int win = 0;

	while(Is_Win(show, row, col)>EASY_COUNT && Is_Win(show, row, col)<=row*col)
	{

		printf("请输入要排查的坐标:>");
		scanf("%d%d", &x, &y);
		if(x>=1 && x<=row && y>=1 && y<=col)
		{
			if(Is_Win(show, row, col) == row*col)//保证第一次不被雷炸死
			{
				if(my[x][y] == '1')
				{
					my[x][y] = '0';
					while(1)
					{
						k = rand()%row + 1;
						l = rand()%col + 1;
						if(my[k][l] == '0')
						{
							my[k][l] = '1';
							break;
						}
					}
				}
			}
			if(my[x][y] == '1')
			{
				printf("很遗憾,你被炸死了\n");
				Displayboard(my, row, col);
				break;
			}
			else
			{
				int count = GetMyCount(my, x, y);
				show[x][y] = count + '0';
				Open_up(my, show, row, col, x, y);
				Displayboard(my, row, col);

				Displayboard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标非法, 请重新输入!\n");
		}
	}
	if(Is_Win(show, row, col)==EASY_COUNT)//判断排雷成功
	{
		printf("排雷成功\n");
		Displayboard(my, row, col);
	}
}
int GetMyCount(char my[ROWS][COLS], int x, int y)
{
	return my[x-1][y]+my[x-1][y-1]+
		   my[x][y-1]+my[x+1][y-1]+
		   my[x+1][y]+my[x+1][y+1]+
		   my[x][y+1]+my[x-1][y+1]-8*'0';//得到雷的个数
}

void Open_up( char my[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y)
{
    int ret = 0;
    ret = GetMyCount(my, x, y);
    if(ret == 0)
    {
        show[x][y] = ' ';
        if(x - 1>0 && y>0 && show[x - 1][y] == '*')
            Open_up(my, show, row, col, x - 1, y);

        if(x - 1>0 && y + 1 <= col && show[x - 1][y + 1] == '*')
            Open_up(my, show, row, col, x - 1, y + 1);

        if(x>0 && y + 1 <= col && show[x][y + 1] == '*')
            Open_up(my, show, row, col, x, y + 1);

        if(x + 1 <= row && y + 1 <= col && show[x + 1][y + 1] == '*')
            Open_up(my, show, row, col, x + 1, y + 1);

        if(x + 1 <= row && y>0 && show[x + 1][y] == '*')
            Open_up(my, show, row, col, x + 1, y);

        if(x + 1 <= row && y - 1>0 && show[x + 1][y - 1] == '*')
            Open_up(my, show, row, col, x + 1, y - 1);

        if(x>0 && y - 1>0 && show[x][y - 1] == '*')
            Open_up(my, show, row, col, x, y - 1);

        if(x - 1>0 && y - 1>0 && show[x - 1][y - 1] == '*')
            Open_up(my, show, row, col, x - 1, y - 1);

    }
    else
    {
        show[x][y] = GetMyCount(my, x, y) + '0';

    }
}

