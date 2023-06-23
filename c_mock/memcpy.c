#include<stdio.h>
#define SIZE 50
void* my_memcpy(void *,void *,int);
int main()
{
	char str1[SIZE],str2[SIZE];
	printf("enter a string1:");
	scanf("%s",str1);
	printf("enter the string2:");
	scanf("%s",str2);
	void* (*fptr)(void *,void *,int)=my_memcpy;
	my_memcpy(str1,str2,sizeof(str1)+1);
}
void* my_memcpy(void *dest,void *src,int n)
{
	char *d=(char *) dest;
	char *s=(char *) src;
	for(int i=0;i<n;i++)
	{
		d[i]=s[i];
	}
	printf("%s\n",d);
}
