#include<stdio.h>
int main()
{
	int number;
	printf("enter a number:");
	scanf("%d",&number);
	if(number & 1 == 1)
		printf("given number is odd:%d\n",number);
	else
		printf("given number is even:%d\n",number);
}
