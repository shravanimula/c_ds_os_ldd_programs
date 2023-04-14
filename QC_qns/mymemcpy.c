#include<stdio.h>
#include<string.h>
#define SIZE 100
void mymemcpy(void *,void *,int);
int main()
{
	char str1[SIZE],str2[SIZE];
	printf("enter a string1:");
	scanf("%[^\n]s",str1);
	printf("length of the string:%ld\n",strlen(str1));
	mymemcpy(str1,str2,strlen(str1)+1);
}
void mymemcpy(void *dest,void *src,int n)
{
	int i;
	char *d=(char *)dest;
	char *s=(char *)src;
	for(i=0;s[i]!='\0';i++)
	{
		d[i]=s[i];
	}
	printf("destionation of the string:%s\n",d);
}


