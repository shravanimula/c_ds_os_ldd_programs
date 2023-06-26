#include<stdio.h>
void swap_numbers(int *,int *);
int main()
{
	int a,b;
	printf("enter the a value:");
	scanf("%d",&a);
	printf("enter the b value:");
	scanf("%d",&b);
	printf("before swap the values are a=%d\tb=%d\n",a,b);
	void (*fp)(int *,int *)=swap_numbers;
	fp(&a,&b);
	printf("after swap the values are a=%d\tb=%d\n",a,b);
}
void swap_numbers(int *x,int *y)
{
	*x=(*x) ^ (*y);
	*y=(*x) ^ (*y);
	*x=(*x) ^ (*y);
}
