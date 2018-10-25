#include <stdio.h>
void str_arr(int num)
{
	int i = 0;
	int arr[32] = {0};
	while(num!=0)
	{
		arr[i++] = num%2;
		num/=2;
	}
	for(i=31; i>=1; i-=2)
		printf("%d ", arr[i]);
	printf("\n");
	for(i=30; i>=0; i-=2)
		printf("%d ", arr[i]);
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	str_arr(num);
	return 0;
}


//优化后
#include<stdio.h>
int main()
{
	int i = 0;
	int num = 0;
	scanf("%d", &num);
	printf("奇数位：\n");
	for(i=31; i>=1; i-=2)
		printf("%d ", (num>>i)&1);
	printf("\n");
	printf("偶数位：\n");
	for(i=30; i>=0; i-=2)
		printf("%d ", (num>>i)&1);
	return 0;
}
