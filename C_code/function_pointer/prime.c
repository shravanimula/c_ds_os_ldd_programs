#include<stdio.h>
int prime(int);
int main()
{
	int number,result;
	printf("enter a number:");
	scanf("%d",&number);
	int (*fp)(int)=&prime;
	result=(*fp)(number);
	if(result == 1)
		printf("given number =%d is not a prime number\n",number);
	else
		printf("given number =%d is a prime number\n",number);
}
int prime(int num)
{
	int i,flag;
	for(i=2;i<=num/2;i++)
	{
		if(num % i == 0)
		{
			flag=1;
			break;
		}
		else flag=0;
	}
	return flag;
}
