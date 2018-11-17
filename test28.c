#include <stdio.h>
#include <stdlib.h>

int my_pow(int n, int k)
{
	if(k < 1)
	{
		return 1;
	}
	else 
		return n*my_pow(n, k-1);
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	printf("%d\n",my_pow(n, k));		
	system("pause");
    return 0;
}
