#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("*********************\n");
	printf("*****  1.play  ******\n");
	printf("*****  0.exit  ******\n");
	printf("*********************\n");	
}

void game()
{
	char my[ROWS][COLS] = {0};
	char show[ROWS][COLS] = {0};
	Initboard(my, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	Displayboard(show, ROW, COL);
	Set_my(my, ROW, COL);//布雷
	Displayboard(my, ROW, COL);
	FindMy(my, show, ROW, COL);

}

int main()
{
	int input =  0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！！！\n");
			break;
		default:
			printf("输入错误，请重新选择！！\n");
			break;
		}
	}while(input);
	return 0;
}