#include<stdio.h>
#define SIZE 50
void reverse(char s[],int n)
{
	int i,j;
	for(i=0,j=n-1;i<j;i++,j--)
	{
		s[i]=s[i] ^ s[j];
		s[j]=s[i] ^ s[j];
		s[i]=s[i] ^ s[j];
	}
	printf("after revere the string is :%s\n",s);
}
int main()
{
	char str[SIZE];
	int n;
	printf("enter a length of string:");
	scanf("%d",&n);
	printf("enter a string:");
	scanf("%s",str);
	printf("before reverse the string is:%s\n",str);
	reverse(str,n);
}
