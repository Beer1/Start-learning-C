#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char* my_strcpy(char* dest, const char* str)//用char*是为了实现链式访问
{
	char* cp = dest;
	assert(str != NULL);//断言
	assert(dest != NULL);
	while(*cp++ = *str++)
	{
		;
	}
	return dest;
	
}

int main()
{
	char arr[10] = "********";
	char *str = "hello";
	my_strcpy(arr, str);
	printf("%s", arr);
	system("pause");
	return 0;
}
