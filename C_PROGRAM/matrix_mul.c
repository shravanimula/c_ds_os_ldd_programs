#include<stdio.h>
#define rows1 3
#define column1 2
#define rows2 2
#define column2 2
void matrix_multiplication(int [rows1][column1],int [rows2][column2]);
int main()
{
        int a[rows1][column1],b[rows2][column2],i,j;
        printf("enter the a array elements:\n");
        for(i=0;i<rows1;i++)
        {
                for(j=0;j<column1;j++)
                {
                        scanf("%d",&a[i][j]);
                }
        }
        printf("the a array elements are:\n");
        for(i=0;i<rows1;i++,printf("\n"))
        {
                for(j=0;j<column1;j++)
                {
                        printf("%d\t",a[i][j]);
                }
        }
        printf("enter the b array elements are:\n");
        for(i=0;i<rows2;i++)
        {
                for(j=0;j<column2;j++)
                {
                        scanf("%d",&b[i][j]);
                }
        }
        printf("the b array elements are:\n");
        for(i=0;i<rows2;i++,printf("\n"))
        {
                for(j=0;j<column2;j++)
                {
                        printf("%d\t",b[i][j]);
                }
        }
        void (*fptr)(int [rows1][column1],int [rows2][column2])=matrix_multiplication;
        fptr(a,b);
}
void matrix_multiplication(int a[rows1][column1],int b[rows2][column2])
{
        int i,j,k,result[rows1][column2];
        for(i=0;i<rows1;i++)
        {
                for(j=0;j<column2;j++)
                {
			result[i][j]=0;
			for(k=0;k<column1;k++)
			{
				result[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("the result of mul matrix is:\n");
	for(i=0;i<rows1;i++,printf("\n"))
	{
		for(j=0;j<column2;j++)
		{
			printf("%d\t",result[i][j]);
		}
	}
}

