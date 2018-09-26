#include<stdio.h>
int main()
{
	int i=0;
	int n=0;
	int ret=1;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
	ret *=i;
	}
	/*while(n>0)
	{
	ret *=n;
	n--;
	}*/
	printf("%d", ret);
return 0;
}

#include<stdio.h>
int main()
{
	int i=0;
	int ret=1;
	int sum=0;
	for(i=1;i<=10;i++)
	{
	ret *=i;
	sum +=ret;
	}
	printf("%d\n", sum);
return 0;
}
