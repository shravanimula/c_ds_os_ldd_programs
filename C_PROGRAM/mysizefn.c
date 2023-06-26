#include<stdio.h>
#define MYSIZE(type) (char *)(&type+1) - (char *)(&type)
int main()
{
	char ch;
	int i;
	float f;
	short int s;
	printf("size of char is:%ld\n",MYSIZE(ch));
	printf("size of int is :%ld\n",MYSIZE(i));
	printf("size of float is:%ld\n",MYSIZE(f));
	printf("size of short int is:%ld\n",MYSIZE(s));
       
}
