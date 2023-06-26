#include<stdio.h>
#define SET(num,pos) (num|(1<<pos))
#define CLEAR(num,pos) (num & (~(1<<pos)))
#define TOGGLE(num,pos) (num ^(1<<pos))

int main()
{
	int number,position;
	printf("enter the number:");
	scanf("%d",&number);
	printf("enter the poition:");
	scanf("%d",&position);
	printf("set the bit position:%d\n",SET(number,position));
	printf("clear the bit position:%d\n",CLEAR(number,position));
	printf("toggle the bit position:%d\n",TOGGLE(number,position));
}
