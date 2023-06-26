#include<stdio.h>
#define SIZE 50
void* mystrcpy(char *dest,char *src)
{
	int i;
	for(i=0;src[i]!='\0';i++)
	{
		dest[i]=src[i];
	}
	dest[i]='\0';
}
int main()
{
	char str1[SIZE],str2[SIZE];
	printf("enter the string1:");
	scanf("%s",str1);
	printf("enter the string2:");
	scanf("%s",str2);
	printf("before string str1=%s\t,str2=%s\n",str1,str2);
	void* (*fp)(char *,char *)=mystrcpy;
	fp(str1,str2);
	printf("after string copy str1=%s\t,str2=%s\n",str1,str2);
}

