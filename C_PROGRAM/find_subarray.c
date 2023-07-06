#include<stdio.h>
#define SIZE 50
void find_subarray(int [],int,int [],int);
int main()
{
	int array1[SIZE],array2[SIZE];
	int n1,n2,i;
	printf("enter the array1 size n1:");
	scanf("%d",&n1);
	printf("enter the array1 values:\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&array1[i]);
	}
	printf("enter the array2 size:");
	scanf("%d",&n2);
	printf("enter the array2 elements:\n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&array2[i]);
	}
	void (*fptr)(int [],int,int [],int)=find_subarray;
	fptr(array1,n1,array2,n2);
}
void find_subarray(int a1[],int m,int a2[],int n)
{
	int cnt=1,i;
	for(i=0;i<m;i++)
	{
		int j;
		if(a1[i]==a2[0])
		{
			for(j=1;j<n;j++)
			{
				if(a1[i+j]==a2[j])
				{
					cnt++;
				}
			}
		}
	}
	if(n==cnt)
	{
		printf("the sub array is found\n");
	}
	else
		printf("the sub array is not found\n");
}
