#include<stdio.h>
int reverse_number(int num)
{
	int rev=0;
	while(num>0)
	{
		rev=rev*10+num%10;
		num=num/10;
	}
	return rev;
}
int main()
{
	int number;
	printf("enter the number:");
	scanf("%d",&number);
	printf("before reverse the number is:%d\n",number);
	int (*fp)(int)=reverse_number;
	int result=fp(number);
	printf("after reverse the number is :%d\n",result);
}
