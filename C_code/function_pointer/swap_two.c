#include<stdio.h>
void swapnumbers(int ,int);
int main()
{
	int num1,num2;
	printf("enter a number1:");
	scanf("%d",&num1);
	printf("enter a number2:");
	scanf("%d",&num2);
	printf("before swap the numbers:\n");
	printf("num1=%d\t,num2=%d\n",num1,num2);
	void (*fp)(int,int)=&swapnumbers;
	(*fp)(num1,num2);
}
void swapnumbers(int a,int b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf(" after swap the numbers:\n");
	printf("num1=%d\t,num2=%d\n",a,b);
}
