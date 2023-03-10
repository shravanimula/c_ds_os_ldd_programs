#include<stdio.h>
void prime_range(int start ,int end)
{
	int i,j,flag;
	for(i=start;i<=end;i++)
	{
		for(j=2;j<i;j++)
		{
			flag=0;
			if(i%j == 0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("%d\t",i);
	}
}


int main()
{
	int min,max;
	printf("enter the minimum range of number:");
	scanf("%d",&min);
	printf("enter the maximum range of number:");
	scanf("%d",&max);
	prime_range(min,max);
	
}
