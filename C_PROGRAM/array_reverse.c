#include<stdio.h>
#define SIZE 50
void reverse_array(int [],int);
int main()
{
	int array[SIZE];
	int i,n;
	printf("enter the array size:");
	scanf("%d",&n);
	printf("enter the array elements are:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("before reverse the array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
	void (*fptr)(int [],int)=reverse_array;
	fptr(array,n);
	printf("\nafter reverse the array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
}
void reverse_array(int a[],int n)
{
	int i,j,temp;
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}
