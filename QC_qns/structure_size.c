#include<stdio.h>
struct st{
	char name[20];
	int rollno;
	float marks;
};
int main()
{
	struct st s1;
	struct st *s2=NULL;
	printf("size of struct is :%ld\n",sizeof(s1));
	printf("The size of the structure is:%ld\n",(char *)(s2 + 1) -(char *)(s2));
}
