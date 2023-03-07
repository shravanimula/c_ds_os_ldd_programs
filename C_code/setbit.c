#include<stdio.h>
int main()
{
	int a,pos,result;
	printf("enter a number:");
	scanf("%d",&a);
	printf("enter a postion to set :");
	scanf("%d",&pos);
	result=a|(1<<pos);
	printf("set the bit:%d\n",result);
}
