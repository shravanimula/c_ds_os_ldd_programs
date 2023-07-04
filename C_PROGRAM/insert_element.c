/*insert the element at radom position*/
#include<stdio.h>
#define SIZE 50

int main()
{
	int array[SIZE];
	int i,n,position,element;
	printf("enter the size of the array:\n");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("before element inserted the array is:\n");
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);

	printf("\nenter the elements to inserted:");
	scanf("%d",&element);
	printf("enter the position to inserted:\n");
	scanf("%d",&position);
	n=n+1;
	for(i=n-1;i>=position;i--)
	{
		array[i]=array[i-1];
	}
	array[position-1]=element;
	printf("the array elements are :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
}
