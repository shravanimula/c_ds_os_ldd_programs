#include<stdio.h>
int main()
{
	//pointer to const
	int i=10,j=100;
	const int *ptr=&i;
	printf("%d\n",*ptr);
	ptr=100;//error
	ptr=&j;
	printf("%d\n",*ptr);


	//const to pointer
	int a=10,b=20;
	int *const ptr1=&a;
	printf("%d\n",*ptr1);
	*ptr1=100;
	printf("%d\n",*ptr1);
	ptr1=&b;//error
	printf("%d\n",*ptr1);
}
