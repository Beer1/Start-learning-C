#include<stdio.h>
void maind()
{
	int i,j;
	for(i=1;i<=9;i++)
	{	for(j=1;j<=9;j++)
			printf("%d*%d=%-4d",i,j,i*j);
			printf("\n");  
	}
}
