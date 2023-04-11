#include<stdio.h>
#define SIZE 100
void mystrrev(char s[],int n)
{
	int i,j;
	for(i=0,j=n-i-1;i<j;i++,j--)
	{
		s[i]=s[i] + s[j];
		s[j]=s[i] - s[j];
		s[i]=s[i] - s[j];
	}
	printf("after reverse:%s\n",s);
}
int main()
{
	char str[SIZE];
	int n;
	printf("enter a length of the string:");
	scanf("%d",&n);
	printf("enter the string:");
	scanf("%s",str);
	mystrrev(str,n);
}
