#include<stdio.h>
int main()
{
	int number,position,result;
	printf("enter a number:");
	scanf("%d",&number);
	printf("enter the position to set:");
	scanf("%d",&position);
	result=number | (1 << position);
	printf("the result of the number is :%d\n",result);
}
