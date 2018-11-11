#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int ch = 0;
	while((ch = getchar()) != EOF)
	{
		if('A' <= ch && ch <= 'Z')
		{
			printf("小写为：%c", ch + 32);
		}
		else if('a' <= ch && ch <= 'z')
		{
			printf("大写为：%c", ch - 32);
		}
		else
		printf("%c", ch);
	}
	return 0;
}
