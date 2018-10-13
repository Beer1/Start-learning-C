#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
printf("******************************\n");
printf("*********1.开始游戏***********\n");
printf("*********0.退出游戏***********\n");
printf("******************************\n");
}
void game()
{
	//生成随机数
	int input = 0;
	int ret = rand()%100+1;
	//猜数字
	while(1)
	{
	printf("请输入要猜的数字：");
	scanf("%d", &input);
	if(input > ret)
	{
		printf("猜大了\n");
	}
	else if(input < ret)
	{
		printf("猜小了\n");
	}
	else
	{
		printf("猜对了，真棒！\n");
	break;
	}
	}
	}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
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
		printf("退出游戏\n");
		break;
	default:
		printf("输入错误，请重新输入！\n");
		break;
	}
	}while(input);
return 0;
}
