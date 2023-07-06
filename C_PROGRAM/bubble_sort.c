#include<stdio.h>
#define SIZE 100
void bubble_sort(int [],int);
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
	void (*fptr)(int [],int)=bubble_sort;
	fptr(array,n);
}
void bubble_sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i] > a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n after sorting the array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
