#include<stdio.h>
int main()
{
	int number;
	printf("enter a number:");
	scanf("%d",&number);
	if( (number & 1) == 1)
		printf("given number=%d is odd number\n",number);
	else
		printf("given number=%d is even number\n",number);
}
