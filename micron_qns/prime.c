#include<stdio.h>
int prime(int n)
{
	int flag=0,i;
	for(i=2;i <= n/2;i++)
	{
		if(n % i == 0)
		{
			flag=1;
			break;
		}
	}
	return flag;
}
int main()
{
	int num,result;
	printf("enter a number:");
	scanf("%d",&num);
	result=prime(num);
	if(result == 1)
		printf("given number is not a prime number:%d\n",num);
	else
		printf("given number is prime number:%d\n",num);
}
