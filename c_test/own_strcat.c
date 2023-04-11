#include<stdio.h>
#define SIZE 50
void mystrcat(char dest[],char src[])
{
	int i,len;
	for(i=0;dest[i]!='\0';i++)
	{
		len++;
	}
	for(i=0;src[i]!='\0';i++)
	{
		dest[len+i]=src[i];
	}
	dest[len+i]='\0';
	printf("after the concat the strings are:%s\t%s\n",dest,src);
}
int main()
{
	char str1[SIZE],str2[SIZE];
	printf("enter a string1:");
	scanf("%s",str1);
	printf("enter a string2:");
	scanf("%s",str2);
	printf("before strcat the strings are:%s\t%s\n",str1,str2);
	mystrcat(str1,str2);
}
