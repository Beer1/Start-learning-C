#include<stdio.h>
#include<string.h>
int main()
{
	char arr[10]={0};
	int i=0;
	for(i=1;i<=3;i++)
	{
		printf("请输入密码：");
	scanf(" %s", &arr);
	if(strcmp(arr,"0123456789")==0)
	{
	break;
	}
	else
	{
		printf("登录失败\n");
	}
	}
	if(i>3)
	{
		printf("输入次数超过三次，请退出程序\n");
	}
	else
	{
		printf("登陆成功\n");
	
	}
	
return 0;
}
