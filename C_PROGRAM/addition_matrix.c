#include<stdio.h>
#define row 3
#define column 2
int main()
{
	int array1[row][column],array2[row][column],array3[row][column];
	int i,j;
	printf("enter the array1 elements:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&array1[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&array2[i][j]);
		}
	}
	printf("the array1  elements are :\n");
	for(i=0;i<row;i++,printf("\n"))
	{
		for(j=0;j<column;j++)
		{
			printf("%d\t",array1[i][j]);
		}
	}
	
	printf("\nthe array2  elements are :\n");
	for(i=0;i<row;i++,printf("\n"))
	{
		for(j=0;j<column;j++)
		{
			printf("%d\t",array2[i][j]);
		}
	}

	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			array3[i][j]=array1[i][j]+array2[i][j];
		}
	}


	printf("\nthe addtion of two array elements are :\n");
	for(i=0;i<row;i++,printf("\n"))
	{
		for(j=0;j<column;j++)
		{
			printf("%d\t",array3[i][j]);
		}
	}
}
