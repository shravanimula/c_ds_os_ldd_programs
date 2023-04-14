#include<stdio.h>
int main()
{
	int number;
	printf("enter a number:");
	scanf("%d",&number);
	if(number & 1 == 1)
		printf("given number is odd number\n");
	else
		printf("given number is even number\n");
}
