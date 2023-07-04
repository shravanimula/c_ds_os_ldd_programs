#include<stdio.h>
#define SIZE 50
void* mystrncpy(char *,char *,int);
int main()
{
	char s1[SIZE],s2[SIZE];
	printf("enter the string1:");
	scanf("%s",s1);
	printf("enter the string2:");
	scanf("%s",s2);
	printf("before string copy:\n");
	printf("s1=%s\ts2=%s\n",s1,s2);
	int n;
	printf("enter the number characters to copy:\n");
	scanf("%d",&n);
	void* (*fptr)(char *,char *,int)=mystrncpy;
	fptr(s1,s2,n);
	printf("after string n copy  s1=%s\t,s2=%s\n",s1,s2);
}

void* mystrncpy(char *dest ,char *src,int n)
{
	int i;
	for(i=0;i<n && src[i]!='\0';i++)
	{
		dest[i]=src[i];
	}
	dest[i]='\0';
}

