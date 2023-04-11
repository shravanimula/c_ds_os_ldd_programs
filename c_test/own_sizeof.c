#include<stdio.h>
#define mysize(type) (char *)(&type + 1) - (char *)(&type)
int main()
{
	char i;
	printf("size of integer is :%ld\n",mysize(i));
}
