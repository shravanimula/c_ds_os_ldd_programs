#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i;
	printf("enter the number of elements:");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	if(p==NULL)
		printf("memory is not available\n");
	else
	{
		for(i=0;i<n;i++)
		{
			printf("enter the element:");
			scanf("%d",&p[i]);//p+i
		}
	}
	for(i=0;i<n;i++)
		printf("%d\t",p[i]);//(*(p+i))
}
