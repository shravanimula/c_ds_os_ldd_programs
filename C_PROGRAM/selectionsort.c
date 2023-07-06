#include<stdio.h>
#define SIZE 100
void selection_sort(int [],int);
int main()
{
	int array[SIZE];
	int n,i;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("before sorting the array elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
	void (*fptr)(int [],int)=selection_sort;
	fptr(array,n);
}
void selection_sort(int a[],int n)
{
	int i,j,temp,min;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
				min=j;
		}
			if(min!=i)
			{
				temp=a[min];
				a[min]=a[i];
				a[i]=temp;
			}
	}
	printf("\n after sorting the array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
