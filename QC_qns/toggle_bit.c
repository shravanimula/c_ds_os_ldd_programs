#include<stdio.h>
int main()
{
	int number,result,position;
	printf("enter the number:");
	scanf("%d",&number);
	printf("enter the position:");
	scanf("%d",&position);
	result = number^(1<<position);
	printf("toggle the particular bit is :%d\n",result);
}
