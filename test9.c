#include<stdio.h>
int main()
{
	int i=0;
	int flag=1;
	double sum=0.0;
	for(i=1;i<=100;i++)
	{
	sum +=flag* 1.0/i;
	flag = -flag;
	}
	printf("%lf\n", sum);
return 0;
}


#include<stdio.h>
int main()
{
	int i=0;
	int j=0;
	double sum1=0.0;
	double sum2=0.0;
	double sum=0.0;
	for(i=1;i<100;i+=2)
	{
	sum1+=1.0/i;
	}
	for(j=2;j<=100;j+=2)
	{
	sum2+=1.0/j;
	}
	sum=sum1-sum2;
	printf("sum= %lf", sum);
return 0;
}
