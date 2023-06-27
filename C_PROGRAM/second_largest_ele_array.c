/*find the second largest element in the array*/
#include<stdio.h>
#define SIZE 20
int second_largest_element(int [],int);
int main()
{
	int array[SIZE];
	int i,n;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("the array element are:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	int (*fp)(int [],int)=second_largest_element;
	int result=fp(array,n);
	printf("\nthe second largest element in the array is:%d\n",result);
}
int second_largest_element(int a[],int n)
{
	int i,second_max=0,max=1;
	printf("the array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i] > max)
		{
			second_max=max;
			max=a[i];
		}
		else if((a[i] > second_max) && a[i] < max)
		{
			second_max=a[i];
		}
	}
	return second_max;
}
