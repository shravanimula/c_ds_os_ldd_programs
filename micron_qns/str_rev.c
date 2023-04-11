#include<stdio.h>
#define SIZE 100
void strrev(char s[],int n)
{
	int i,j;
	for(i=0,j=n-1;i < j;i++,j--)
	{
		s[i] = s[i] ^ s[j];
		s[j] = s[i] ^ s[j];
		s[i] = s[i] ^ s[j];
	}
	printf("after reverse the string:%s\n",s);
}
int main()
{
	char str[SIZE];
	printf("enter a string:");
	fgets(str,SIZE,stdin);
	int length=0,i;
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	strrev(str,length);
}
