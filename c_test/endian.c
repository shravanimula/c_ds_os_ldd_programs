#include<stdio.h>
int main()
{
	int a=1;
	char *ptr=NULL;
	ptr=(char *) &a;
	if(*ptr==1)
		printf("little endian\n");
	else
		printf("big endian\n");
}
