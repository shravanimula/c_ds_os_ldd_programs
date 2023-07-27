#include<stdio.h>
int add(int,int);
int sub(int,int);
int mult(int,int);
int div(int,int);
int main()
{
	int a,b,i;
	printf("enter the a and b values:");
	scanf("%d%d",&a,&b);
	int(*fp[])(int,int)={add,sub,mult,div};
	for(i=0;i<4;i++)
	{
		printf("%d\n",fp[i](a,b));
	}
}
int add(int x,int y)
{
	return x+y;
}
int sub(int x,int y)
{
	return x-y;
}
int mult(int m,int n)
{
	return m*n;
}
int div(int x,int y)
{
	return x/y;
}
