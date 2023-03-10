#include<stdio.h>
#pragma pack(1)
struct st{
	char ch;
	int data;
	double d;
	char c;
};
int main()
{
	struct  st var;
	printf("size of structure:%ld\n",sizeof(var));
}
