#include<stdio.h>
int main()
{
	char str[50];
	int i,len=0;
	printf("enter astring:");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	printf("length of the string:%d\n",len);
}
