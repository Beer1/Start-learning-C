#include<stdio.h>
void Print_length(int x)
{
	while(x)
	{
		printf("%d ", x%10);
		x /= 10;
	}
}
int main()
{
	int num = 0;
	printf("请输入一个非负整数：");
	scanf("%d", &num);
	Print_length(num);
	return 0;
}


//递归法实现
#include<stdio.h>
void Print(int num)
{
	if(num>9)
	{
		Print(num/10);
	}
	printf("%d ", num%10);
}
int main()
{
	int num = 0;
	printf("请输入一个非负整数：");
	scanf("%d", &num);
	Print(num);
	return 0;
}
