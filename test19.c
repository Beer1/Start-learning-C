#include <stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int i = 0;
	int count = 0;
	scanf("%d%d", &m, &n);	
	for(i=31; i>=0; i--)
	{
		if(((m>>i)&1) != ((n>>i)&1))//移位运算比较其二进制序列
			count++;
	}
	printf("count = %d\n", count);
	return 0;
}
