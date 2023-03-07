#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a number:");
	scanf("%d",&a);
	printf("enter b number:");
	scanf("%d",&b);
	printf("before swap a and b are:%d\t%d\n",a,b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("after swap the a and b values are:%d\t%d\n",a,b);
}
	
