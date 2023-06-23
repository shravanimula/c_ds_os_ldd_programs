#include<stdio.h>
#include<string.h>
#define SIZE 50
void* largest_word(char *);
int main()
{
	char str1[SIZE];
	printf("enter the string1:");
	scanf("%[^\n]s",str1);
	void* (*fptr)(char*);
	fptr=largest_word;
	largest_word(str1);
}
void* largest_word(char* str)
{
	int i,index=0,len1=0,len2=0;
	char substr1[SIZE];
	int c=strlen(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!='\0'&& str[i]!=' ')
		{
			len1++;
		}
		else
		{
			if(len1>len2)
	     		{
				len2=len1;
				index=i-len2;
			}
			len1=0;
		}
	}
	if(len1>len2)
	{
		len2=len1;
		index=c-len2;
	}
	int j=0;
	for(i=index;i<index+len2;i++)
	{ 
		substr1[j]=str[i];
		j++;
	}
	substr1[j]='\0';
	printf("%s",substr1);
}
