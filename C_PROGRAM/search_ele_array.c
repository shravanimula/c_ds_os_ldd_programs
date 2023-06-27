#include<stdio.h>
#define SIZE 50
void search_element(int [], int);
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
	void (*fp)(int [],int)=search_element;
	fp(array,n);

}
void search_element(int a[],int n)
{
	int i,b,flag=0;
	printf("the array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nenter the element to search:");
	scanf("%d",&b);
	for(i=0;i<n;i++)
	{
		if(b==a[i])
		{
			flag=1;
			break;
		}
	}
	if(flag == 1)
	{
		printf("the element is found at position=%d element=%d\n",i,b);
	}
	else
		printf("the element is not found in the array\n");
}
