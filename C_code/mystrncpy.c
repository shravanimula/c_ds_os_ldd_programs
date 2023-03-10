#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
void mystrncpy(char dest[],char src[],int n)
{
	int i;
	for(i=0;i < n && src[i]!='\0';i++)
	{
		dest[i]=src[i];
	}
	dest[i]='\0';
}
int main()
{
	char str1[SIZE],str2[SIZE];
	int i,len=0;
	printf("enter a string1:");
	scanf("%s",str1);
	printf("enter a string2:");
	scanf("%s",str2);
	printf("before copying the strings are str1=%s\t,str2=%s\n",str1,str2);
	for(i=0;i<str1[i]!='\0';i++)
	{
		len++;
	}
	printf("length of the first string:%d\n",len);
	int n;
	printf("enter the n value:");
	scanf("%d",&n);
	if(n > len )
	{
		printf("N value is greater then the length of the string\n");
		exit(0);
	}
	mystrncpy(str2,str1,n);
	printf("after copying the strings are  str1=%s\t,str2=%s\n",str1,str2);
}	
