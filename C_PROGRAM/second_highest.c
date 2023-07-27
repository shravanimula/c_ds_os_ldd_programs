/*find the second highest in the given integer */
#include<stdio.h>
int second_largest_element(int);
int main()
{
	int number,result;
	printf("enter the number:");
	scanf("%d",&number);
	int (*fp)(int)=second_largest_element;
	result=fp(number);
	printf("second largest element is :%d\n",result);
}
int second_largest_element(int num)
{
	int sh=0,fh=0,temp;

	while(num)
	{
		temp=num%10;
		if(temp > fh)
		{
			sh=fh;
			fh=temp;
		}
		else
		{
			if(temp > sh && temp < fh)
				sh=temp;
		
		}
		num=num/10;
	}
	return sh;
}
