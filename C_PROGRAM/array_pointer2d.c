#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,*a[3],cols;
	printf("enter the number of cols:");
	scanf("%d",&cols);
	for(i=0;i<3;i++)
		a[i]=(int *)malloc(cols*sizeof(int));
	printf("enter the array elements are:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("array elements are:\n");
	for(i=0;i<3;i++,printf("\n"))
	{
		for(j=0;j<cols;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	for(i=0;i<3;i++)
		free(a[i]);
}
