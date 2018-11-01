//打印杨辉三角
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	int arr[20][20] = {0};
	int n = 0;
	printf("请输入杨辉三角的行数：");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		arr[i][0] = 1;
		arr[i][i] = 1;
		for(j=1; j<i; j++)
		{
			arr[i][j] = arr[i-1][j-1] + arr[i-1][j];//为上一行相邻两数之和
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=n; j>=i; j--)
			printf("  ");//加空格使其呈金字塔形
		for(j=0; j<=i; j++)
			printf("%4d", arr[i][j]);
			printf("\n");
	}
	system("pause");
	return 0;
}
