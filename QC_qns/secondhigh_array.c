#include<stdio.h>
#define SIZE 50
int main()
{
	int a[SIZE],i,n;
	printf("enter a size of array:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the array elements are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	int sec_max=0,max=1;
	for(i=0;i<n;i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if((a[i] > sec_max ) && (a[i] < max))
		{
			sec_max = a[i];
		}
	}
	printf("\n the second highest number in given array is :%d\n",sec_max);
}
