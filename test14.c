#include<stdio.h>
void mul(int n)
{
	int i = 0;
	int j = 0;
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=i;j++)
	{
	printf("%-2d*%2d=%-3d  ", j, i, j*i);//做对齐处理	
		
	}
	printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	mul(n);
	return 0;
}
