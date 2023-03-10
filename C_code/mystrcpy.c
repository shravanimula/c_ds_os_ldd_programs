#include<stdio.h>
#define SIZE 50
void mystrcpy(char dest[],char src[])
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
	printf("enter a string1:");
	scanf("%s",str1);
	printf("enter a string2:");
	scanf("%s",str2);
	printf("Before copy the string is str1=%s\t,str2=%s\n",str1,str2);
	mystrcpy(str2,str1);
	printf("After copy the string is str1=%s\t,str2=%s\n",str1,str2);
}
