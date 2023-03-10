#include<stdio.h>
#define SET(number,position)  (number | (1 << position))
#define CLEAR(number,position) (number & (~(1 << position)))
#define TOGGLE(number,position) (number ^ (1 << position))

int main()
{
	int num,pos;
	printf("enter a number :");
	scanf("%d",&num);
	printf("enter a position of the bit:");
	scanf("%d" ,&pos);
	printf("to set the position:%d\n",SET(num,pos));
	printf("To clear the position:%d\n",CLEAR(num,pos));
	printf("To toggle the position:%d\n",TOGGLE(num,pos));
}
