#include<stdio.h>
#define rows 3
#define column 3
void matrix_subtraction(int [rows][column],int [rows][column]);
int main()
{
	int a[rows][column],b[rows][column],i,j;
	printf("enter the a array elements:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the a array elements are:\n");
	for(i=0;i<rows;i++,printf("\n"))
	{
		for(j=0;j<column;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	printf("enter the b array elements are:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("the b array elements are:\n");
        for(i=0;i<rows;i++,printf("\n"))
        {
                for(j=0;j<column;j++)
                {
                        printf("%d\t",b[i][j]);
                }
        }
	void (*fptr)(int [rows][column],int [rows][column])=matrix_subtraction;
	fptr(a,b);
}
void matrix_subtraction(int a[rows][column],int b[rows][column])
{
	int i,j;
	int result[rows][column];
	for(i=0;i<rows;i++)
	{
		for(j=0;j<column;j++)
		{
			result[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("the result of sub matrix is:\n");
	for(i=0;i<rows;i++,printf("\n"))
	{
		for(j=0;j<column;j++)
		{
			printf("%d\t",result[i][j]);
		}
	}
}
