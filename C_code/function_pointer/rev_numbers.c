#include<stdio.h>
int reverse(int);
int main()
{
	int number,result;
	printf("enter a number:");
	scanf("%d",&number);
	int (*fp)(int)=&reverse;
	result=(*fp)(number);
	printf("reverse of the number:%d\n",result);
}
int reverse(int n)
{
	int rev=0,temp;
	while( n != 0)
	{
		temp = n % 10;
		rev=rev*10+ temp;
		n = n/10;
	}
	return rev;
}
