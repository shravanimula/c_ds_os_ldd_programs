#include<stdio.h>
int main()
{
	int num,flag=0,i;
	printf("enter a number:");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}
		else flag=0;
	}
	if(flag==1)
	{
		printf("given number %d is not a prime number\n",num);
	}
	else printf("given number %d is prime number\n",num);
}
