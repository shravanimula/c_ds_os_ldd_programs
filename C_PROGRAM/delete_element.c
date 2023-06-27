/*delete the element at particular position*/
#include<stdio.h>
#define SIZE 50
void delete_element_position(int [],int);
int main()
{
	int array[SIZE];
	int n,i;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	void (*fp)(int [],int)=delete_element_position;
	fp(array,n);
}
void delete_element_position(int a[],int n)
{
	int position,i;
	printf("before delteing the element in array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nenter the position to delete:");
	scanf("%d",&position);
	if(position >= n+1)
	{
		printf("deleting is not possible in the array\n");
	}
	else
	{
		for(i=position;i<n-1;i++)
		{
			a[i]=a[i+1];
		}
		printf("after deleting the array is:\n");
		for(i=0;i<n-1;i++)
		{
			printf("%d\t",a[i]);
		}
	}
}
