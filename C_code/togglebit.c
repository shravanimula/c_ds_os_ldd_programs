#include<stdio.h>
int main()
{
	int num,pos,result;
	printf("enter the number:");
	scanf("%d",&num);
	printf("enter the postion:");
	scanf("%d",&pos);
	result=num ^ (1 << pos);
	printf("result of the number:%d\n",result);
}
