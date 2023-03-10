#include<stdio.h>
int main()
{
	int a =10 ;
	volatile int b=100;
	printf("%d\t%d\t%d\t%d\n",++a,--a,++a,--a);
	printf("%d\t%d\t%d\t%d\n",++b,--b,++b,--b);
}

