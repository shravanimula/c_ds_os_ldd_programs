#include<stdio.h>
#define SIZE 100
void freq_array(int [],int ,int []);
int main()
{
	int array[SIZE],i,n,freq[SIZE];
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("the array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
	freq_array(array,n,freq);
}
void freq_array(int a[],int n,int freq[])
{
	int i,j,count=0, visited=-1;
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i] == a[j])
			{
				count++;
				freq[j]=visited;
			}
		}
		if(freq[i] != visited)
		{
			freq[i]=count;
		}
	}
	printf("\nthe frequency of the elements is:\n");
	for(i=0;i<n;i++)
	{
		if(freq[i] != visited)
		{
			printf("%d occurs %d times\n",a[i],freq[i]);
		}
	}
}
