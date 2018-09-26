#include<stdio.h>
#include<math.h>
int main()
{
	int i=0;
	int count=0;
	for(i=101;i<200;i+=2)
	{
	int j=0;
	for(j=2;j<=sqrt(i*1.0);j++)
	{
	if(i%j==0)
		break;
	}
	if(j>sqrt(i*1.0))
		{
			count++;
			printf("%d ", i);	
	}
	}
	printf("\ncount=%d\n ", count);
	return 0;
}
