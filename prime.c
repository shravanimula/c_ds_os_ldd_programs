#include<stdio.h>
int main()
{
	int number,i ,flag=0;
	printf("enter a number:");
	scanf("%d",&number);
	for(i=2;i<=number/2;i++)
	{
		if(number%i==0)
		{
			flag=1;
			break;
		}
		else flag=0;
	}
	if(flag==1)
		printf("given number is not a prime\n");
	else
		printf("given number is prime number\n");
}
