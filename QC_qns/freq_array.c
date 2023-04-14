#include<stdio.h>
#define SIZE 100
int main()
{
	int array[SIZE],i,n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",array[i]);
