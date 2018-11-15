#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	for(i=0; i<=99999; i++)
	{  
		int count = 1;
		int tmp = i;
		double sum = 0;
		while(tmp>9)
		{
			tmp /= 10;
			count++;
		}
		tmp = i;
		while(tmp)
		{
			sum += pow(tmp%10, 1.0*count);
			tmp /= 10;
		}
		if(sum == i)
		{
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}
