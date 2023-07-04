#include<stdio.h>
#define SIZE 50

int mystrlen(char []);
int main()
{
	char str[SIZE];
	printf("enter the string:\n");
	scanf("%[^\n]s",str);
	printf("%s\n",str);
	int (*fp)(char[])=mystrlen;
	int len=fp(str);
	printf("lengh of the string is:%d\n",len);
}
int mystrlen(char s[])
{
	int i,c=0;
	for(i=0;s[i]!='\0';i++)
	{
		c++;
	}
	return c;
}
