#include<stdio.h>
int reverse(int);
int main()
{
	int num,result;
	printf("enter a number:");
	scanf("%d",&num);
	printf("before reverse the number:%d\n",num);
	result=reverse(num);
	printf("after reverse the numbers:%d\n",result);
}
int reverse(int n)
{
	int rev=0;
	while(n > 0)
	{
		rev=rev*10 + n % 10;
		n = n/10;
	}
	return rev;
}
