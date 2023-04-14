#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the size of array:");
	scanf("%d",&n);
	int array[n-1];
	printf("enter the elements of array;\n");
	for(i=0;i<n-1;i++)
		scanf("%d",&array[i]);
	printf("the array elemnets are:\n");
	for(i=0;i<n-1;i++)
		printf("%d  ",array[i]);
	int ele,sum=0;
	for(i=0;i<n-1;i++)
	{
		sum=sum+array[i];
	}
	ele=(n*(n+1))/2-sum;
	printf("\nthe missig element in array is:%d\n",ele);
}
