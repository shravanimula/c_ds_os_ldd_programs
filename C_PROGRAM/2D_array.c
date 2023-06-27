#include<stdio.h>
#define ROW 3
#define COLUMN 2
int main()
{
	int array[ROW][COLUMN];
	int i,j;
	printf("enter the array elements are:\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	printf("the 2d array elements are:\n");
	for(i=0;i<ROW;i++,printf("\n"))
	{
		for(j=0;j<COLUMN;j++)
		{
			printf("%d\t",array[i][j]);
		}
	}
}		
