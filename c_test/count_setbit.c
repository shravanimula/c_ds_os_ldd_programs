#include<stdio.h>
int main()
{
	int number,count=0;
	printf("enter a number:");
	scanf("%d",&number);
	while(number)
	{
		if((number & 1 )==1)
			count ++;
		number=number >> 1;	
	}
	printf("count the number of set bits:%d\n",count);
}
