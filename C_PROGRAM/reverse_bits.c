#include<stdio.h>
int main()
{
	int data,left=7,right=0;
	printf("enter the data:");
	scanf("%d",&data);
	for(left,right;left>right;left--,right++)
	{
		if(((data>>left)&1)!=((data>>right)&1))
		{
			data=data^(1<<left);
			data=data^(1<<right);
		}
	}
	for(int i=7;i>=0;i--)
	{
		printf("%d",((data>>i)&1));
	}
}

