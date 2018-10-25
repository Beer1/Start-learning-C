#include <stdio.h>
int count_one_bits(unsigned int value)
{
	int count = 0;
	while(value)
	{
		value = value&(value-1);
		count++;
	}
	return count;
}

int main()
{
	int num = 0;
	scanf("%d", &num);
printf("%d\n", count_one_bits(num));

	return 0;
}


#include<stdio.h>
int count_bits(unsigned int value)
{
	int count = 0;
	int i = 0;
	for(i=0; i<32; i++)
	{
		if((value>>i)&1 == 1)
			count++;
	}
	return count;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	printf("%d\n", count_bits(num));
	return 0;
}


#include<stdio.h>
int count_bits(unsigned int value)
{
	int count = 0;
	while(value)
	{
		if(value%2 == 1)//num%2取二进制的最后一位
			count++;
			value /= 2;//num/2右移去掉二进制的最后一位
	}
	return count;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	printf("%d\n", count_bits(num));
	return 0;
}
