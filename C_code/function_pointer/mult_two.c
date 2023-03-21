#include<stdio.h>
int multiplicationoftwonumbers(int ,int);
int main()
{
	int num1,num2;
	printf("enter a number1:");
	scanf("%d",&num1);
	printf("enter a number2:");
	scanf("%d",&num2);
	int (*fp)(int,int)=&multiplicationoftwonumbers;
	int result=(*fp)(num1,num2);
	printf("multiplication of two numbers:%d\n",result);
}
int multiplicationoftwonumbers(int a,int b)
{
	int result=0;
	while(b > 0)
	{
		if( b & 1 == 1)
		{
			result=result+a;
		}
		a = a << 1;
		b = b >> 1;
	}
	return result;
}
