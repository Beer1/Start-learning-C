#include<stdio.h>
int main()
{
	int i=0;
	for(i=1;i<=100;i++)
	{
	if(1==i%2)
		printf("%d ", i);
	}
return 0;
}

#include<stdio.h>
int main()
{
	int i=0;
	for(i=1;i<=100;i+=2)
	{
	printf("%d ", i);
	}
return 0;
}

#include<stdio.h>
int main()
{
	int i=0;
	for(i=1;i<=100;i++)
	{
	if(0==i%2)
		continue;
	else
		printf("%d ", i);
	}
return 0;
}
