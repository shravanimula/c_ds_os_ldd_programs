#include<stdio.h>
int palindrome(int);
int main()
{
	int number,result;
	printf("enter a number:");
	scanf("%d",&number);
	int (*fp)(int)=palindrome;
	result=(*fp)(number);
	if(result != number)
		printf("given number is not a palindrome\n");
	else
		printf("given number is a palindrome\n");
}
int palindrome(int num)
{
	int rev=0,temp;
	while(num != 0)
	{
		temp = num % 10;
		rev=rev*10 + temp;
		num = num / 10;
	}
	return rev;

}

