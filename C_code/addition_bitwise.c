#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a number:");
	scanf("%d",&a);
	printf("enter b number:");
	scanf("%d",&b);
	int value;
	while(b != 0)
	{
		value =(a & b) << 1;
		a = a ^ b;
		b =  value;
	}
	printf("The addition of two number:%d\n",a);
}
