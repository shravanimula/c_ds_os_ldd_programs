#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int stack[SIZE];
int top=-1;
void push(int);
int pop();
int peek();
int main()
{
	int choice ,data;
	while(1)
	{
		printf("1.push 2.pop 3.peek 4.exit\n");
		printf("enter your choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("enter the data to be pushed:\n");
			       scanf("%d",&data);
			       push(data);
			       break;
			case 2:if(top==-1)
			       {
				       printf("stack is empty\n");
			       }
			       else
				       printf("data is poped is %d\n",pop());
			       break;
			case 3:if(top==-1)
				       printf("stack is empty\n");
			       else
				       printf("data is pointed to the top of the stack is:%d\n",peek());
			       break;
			case 4:exit(0);
		}
	}
}
void push(int n)
{
	if(top==SIZE-1)
		printf("stack is full\n");
	else
	{
		stack[++top]=n;
	}
}
int pop()
{
	return stack[top--];
}
int peek()
{
	return stack[top];
}
