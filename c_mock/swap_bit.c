#include<stdio.h>
int main()
{
	int data,bitpos1,bitpos2;
	printf("enter the data:");
	scanf("%d",&data);
	printf("enter the bitpos1:");
	scanf("%d",&bitpos1);
	printf("enter the bitpos2:");
	scanf("%d",&bitpos2);
	printf("before swapping:%d\n",data);
	data=data^(1<<bitpos1);
	data=data^(1<<bitpos2);
	printf("after swapping:%d\n",data);
}
