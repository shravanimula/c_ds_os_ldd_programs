#include<stdio.h>
int prime_number(int);
int main()
{
	int num;
	printf("enter  number:");
	scanf("%d",&num);
	int (*fp)(int)=prime_number;
	int a=fp(num);
	if(a==0)
		printf("given number is prime number:%d\n",num);
	else
		printf("given number is not a prime number:%d\n",num);
}
int prime_number(int number)
{
	int flag=0,i;
	for(i=2;i<=number/2;i++)
	{
		if(number%i==0)
		{
			flag=1;
			break;
		}
	}
	return flag;
}
