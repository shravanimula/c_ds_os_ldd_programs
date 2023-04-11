#include<stdio.h>
int main()
{
	int number,pos,result;
	printf("enter a number:");
	scanf("%d",&number);
	printf("enter the postion:");
	scanf("%d",&pos);
	result=number ^ (1 << pos);
	printf("the result of the number is :%d\n",result);
}

