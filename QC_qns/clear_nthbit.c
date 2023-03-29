#include<stdio.h>
int main()
{
	int number,position,result;
	printf("enter a number:");
	scanf("%d",&number);
	printf("enter a position:");
	scanf("%d",&position);
	result = number & (~(1 << position));
	printf("clear the position of the number:%d\n",result);
}
