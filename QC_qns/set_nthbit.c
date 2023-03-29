#include<stdio.h>
int main()
{
	int number,position,result;
	printf("enter a number:");
	scanf("%d",&number);
	printf("enter a position:");
	scanf("%d",&position);
	result = number | (1 << position);
	printf("the set of the position of result:%d\n",result);
}
