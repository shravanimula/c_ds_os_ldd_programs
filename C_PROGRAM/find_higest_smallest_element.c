/*find the highest and smallest element in the array*/
#include<stdio.h>
#define SIZE 50
void smallest_highest_element(int [],int);
int main()
{
	int array[SIZE];
	int i,n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the array elements are:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	void (*fp)(int [],int)=smallest_highest_element;
	fp(array,n);
}
void smallest_highest_element(int a[],int n)
{
	int min=a[0],max=a[0];
	int i;
	printf("the array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=1;i<n;i++)
	{
		if(a[i] > max)
		{
			max=a[i];
		}
		if(a[i] < min)
		{
			min=a[i];
		}
	}
	printf("\nthe largest elements in the array is :%d\n",max);
	printf("the smallest element in the array is :%d\n",min);
}

