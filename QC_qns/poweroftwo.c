#include<stdio.h>
int main()
{
	int number,flag;
	printf("enter a number:");
	scanf("%d",&number);
	while(number > 1) 
	{
		flag = 0;
		if(number%2 !=0)
		{
			flag=1;
			break;
		}
		number = number / 2;
	}
	if(flag == 0)
		printf("given number is power of two\n");
	else
		printf("given number is not a power of two\n");
}
		
