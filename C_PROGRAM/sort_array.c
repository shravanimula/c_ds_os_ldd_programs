#include<stdio.h>
#define SIZE 50
void sort_array(int [], int);
int main()
{
	int array[SIZE];
	int i,n;
	printf("enter the array size:");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("before sorting the array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
	void (*fp)(int [],int)=sort_array;
	fp(array,n);
}
void sort_array(int a[],int n)
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
	printf("\nafter sorting the array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
