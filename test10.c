#include<stdio.h>
int main()
{
	int a = 0;
	int n = 0;
	int i = 0;
	int tmp = 0;
	int sum = 0;
	scanf("%d%d", &a, &n);
	for(i=0; i<n; i++)
	{
		tmp = 10*tmp+a;
		sum += tmp;
	}
	printf("%d", sum);
return 0;
}
