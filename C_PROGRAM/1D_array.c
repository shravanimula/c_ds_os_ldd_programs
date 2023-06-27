#include<stdio.h>
#define SIZE 50
int main()
{
	int array[SIZE];
	int n,i;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the array elements are:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("the array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
}

