#include<stdio.h>
int main()
{
	volatile int i=10;
	int a=100;
	printf("%d\t%d\t%d\t%d\n",++a,--a,++a,--a);
	printf("%d\t%d\t%d\t%d\n",++i,--i,++i,--i);
}
