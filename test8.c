#include<stdio.h>
void print_arr(int arr[],int sz)
{
	int i=0;
	for(i=0;i<sz;i++)
	{	
		printf(" %d", arr[i]);
	}
	printf("\n");	
}

int main()
{
	int arr1[]={1,2,3,4,5,6};
	int arr2[]={6,5,4,3,2,1};
	int i=0;
	int sz=sizeof(arr1)/sizeof(arr1[0]);
	for(i=0;i<sz;i++)
	{
	int tmp=arr1[i];
	arr1[i]=arr2[i];
	arr2[i]=tmp;
	}
	print_arr(arr1, sz);
	print_arr(arr2, sz);

return 0;
}
