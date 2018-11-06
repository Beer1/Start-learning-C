#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0;
	int b = 0;
	printf("请输入a,b的值：");
	scanf("%d%d", &a, &b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("交换后：a=%d, b=%d", a, b);
	system("pause");
	return 0;
}
