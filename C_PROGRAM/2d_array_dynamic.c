#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,rows;
	int (*a)[4];
	printf("enter the number of rows:");
	scanf("%d",&rows);
	a=(int(*)[4])malloc(rows*4*sizeof(int));
	for(i=0;i<rows;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("enter the array elements:");
			scanf("%d",&a[i][j]);
		}
	}
	printf("the 2d array elements are:\n");
	for(i=0;i<rows;i++,printf("\n"))
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	free(a);
}
