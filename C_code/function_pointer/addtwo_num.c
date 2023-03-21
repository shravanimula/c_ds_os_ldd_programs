#include<stdio.h>
int addtwonumbers(int,int);
int main()
{
	int a,b;
	printf("enter a number:");
	scanf("%d",&a);
	printf("enter b number:");
	scanf("%d",&b);
	int (*fp)(int,int)=&addtwonumbers;
	int result=(*fp)(a,b);
	printf("the addition of two numbers is:%d\n",result);
}
int addtwonumbers(int m,int n)
{
	int carry;
	while(n != 0)
	{
		carry=(m & n) << 1;
		m = m ^ n;
		n = carry;
	}
	return m;
}
