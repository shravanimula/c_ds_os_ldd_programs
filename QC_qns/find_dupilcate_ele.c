#include<stdio.h>
#define SIZE 50
int main()
{
	int array[SIZE],n,i;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the array elements are:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	int duplicate=0;
	for(i=0;i<n;i++)
	{
		duplicate=duplicate ^ array[i];
	}
	printf("the missing duplucate element in the array is:%d\n",duplicate);
}
