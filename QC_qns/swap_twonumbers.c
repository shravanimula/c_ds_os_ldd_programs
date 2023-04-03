#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a number:");
	scanf("%d",&a);
	printf("enter b number:");
	scanf("%d",&b);
	printf("before swapping the numbers are a:%d\tb:%d\n",a,b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("after swapping the numbers are \n");
	printf("a=%d\tb=%d\n",a,b);
}
