#include<stdio.h>
#define SIZE 100
void insertion_sort(int [],int);
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
	void (*fptr)(int [],int)=insertion_sort;
	fptr(array,n);
}
void  insertion_sort(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j >= 0 && a[j] > temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("\nafter sorting the array elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
