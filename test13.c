#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[] = {10};
	system("shutdown -s -t 60");
	while(1)
	{
	printf("电脑将在一分钟内关机，若输入“666”，则取消关机：");
	scanf("%s", input);
	if(0 == strcmp(input,"666"))
	{
	system("shutdown -a");
	break;
	}
	}
	return 0;
}
