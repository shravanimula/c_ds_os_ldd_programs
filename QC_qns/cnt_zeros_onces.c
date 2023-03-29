#include<stdio.h>
int main()
{
	int number,size=8,i;
	int count_onces=0,count_zeros=0;
	printf("enter a number:");
	scanf("%d",&number);
	for(i=0;i<size;i++)
	{
		if(number & 1)
		{
			count_onces++;
		}
		else
		{
			count_zeros++;
		}
		number =number >> 1;
	}
	printf("count the number of onces in  binary:%d\n count the number of zeros in binary:%d\n",count_onces,count_zeros);
}

