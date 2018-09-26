#include<stdio.h>
int main()
{
	int num=0;
	int a=0;
	int b=0;
	int c=0;
	int i=0;
	for(i=100;i<=999;i++)
	{
		a=i/100%10;
		b=i/10%10;
		c=i%10;
		num=a*a*a+b*b*b+c*c*c;
		if(i==num)
		{
			printf(" %d", num);
		}
	}
return 0;
}
