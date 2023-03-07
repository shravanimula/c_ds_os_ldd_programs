#include<stdio.h>
#define mysizeof(type)    (char *)(&type+1) - (char *)(&type)
int main()
{
	int a=10;
	char ch='A';
	printf("size of a=%ld\n",mysizeof(a));
	printf("size of ch=%ld\n",mysizeof(ch));
}
