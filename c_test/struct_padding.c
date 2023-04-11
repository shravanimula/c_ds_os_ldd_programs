#include<stdio.h>
#pragma pack(1)
struct student{
	char ch;
	int i;
	char b;
	double d;
};
int main()
{
	struct student var;
	printf("the size of the structure:%ld\n",sizeof(var));
}
