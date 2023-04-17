#include<stdio.h>
#define SIZE 50
int main()
{
	char str[SIZE];
	printf("enter a string:");
	scanf("%s",str);
	for(int i=0;str[i]!='\0';i++)
		printf("%c\t",str[i]);
}
