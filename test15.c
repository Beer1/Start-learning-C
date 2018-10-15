#include<stdio.h>
int Is_Leap_Year(int i)
{
	if(((i%4==0)&&(i%100!=0))||(i%400==0))
	{
			return 1;
	}
	else
	{
	return 0;
	}
}
int main()
{
	int i = 0;
	int count = 0;
	for(i=1000; i<=2000; i++)
	{
		if(Is_Leap_Year(i))
		{
		printf("%d ", i);
		count++;
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}
