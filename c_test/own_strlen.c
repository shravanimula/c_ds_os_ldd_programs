#include<stdio.h>
#define SIZE 50
int main()
{
	char str[SIZE];
	int i,length=0;
	printf("enter a string:");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	printf("length of the string:%d\n",length);
}
