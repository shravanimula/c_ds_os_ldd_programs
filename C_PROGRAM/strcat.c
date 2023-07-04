#include<stdio.h>
#define SIZE 50
void* mystrcat(char *dest,char *src)
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
}
int main()
{
	char str1[SIZE],str2[SIZE];
	printf("enter the string1:");
	scanf("%s",str1);
	printf("enter the string2:");
	scanf("%s",str2);
	printf("before string cat str1=%s\t,str2=%s\n",str1,str2);
	void* (*fp)(char *,char *)=mystrcat;
	fp(str1,str2);
	printf("after string cat str1=%s\t,str2=%s\n",str1,str2);
}

