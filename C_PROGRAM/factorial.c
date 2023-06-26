#include<stdio.h>
int factorial(int num)
{
	int fact=1;
	if(num==0)
		return 1;
	else
		return (num*factorial(num-1));
}
int main()
{
	int number;
	printf("enter the number:");
	scanf("%d",&number);
	int (*fp)(int)=factorial;
	int result=fp(number);
	printf("the factorail of number %d=%d\n",number,result);
}
