#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d", &a, &b);//输入两个数a,b
	printf("%d ", (a&b) + ((a^b)>>1));
	system("pause");
	return 0;
}
