#include<stdio.h>
int prime(int num)
{
	int i,flag=0;
	for(i=2;i<num;i++)
	{
		if(num % i == 0)
		{
			flag=1;
			break;
		}
		else flag =0;
	}
	return flag;
}

int main()
{
	int number,result;
	printf("enter a number:");
	scanf("%d",&number);
	//result=prime(number);
	int (*fp)(int)=prime;
	result=fp(number);
	if (result == 1)
		printf("given number is not a prime:%d\n",number);
	else
		printf("given number is prime:%d\n",number);
}
