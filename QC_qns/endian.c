#include<stdio.h>
int main()
{
	int num=1;
	char *ptr=(char *)&num;
	if(*ptr==1)
	{
		printf("machine is little endian\n");
	}
	else
	{
		printf("machine is big endian\n");
	}
}

