#include<stdio.h>
int main()
{
	int num,pos,result;
	printf("enter a number:");
	scanf("%d",&num);
	printf("enter a position:");
	scanf("%d",&pos);
	result= num & (~(1<<pos));
	printf("result of the bit:%d\n",result);
}
