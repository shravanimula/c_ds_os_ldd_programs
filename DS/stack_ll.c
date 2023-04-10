#include<stdio.h>
#include<stdlib.h>
struct stack{
	int data;
	struct stack *link;
};
struct stack *top=NULL;
void push(int d)
{
	struct stack *newnode=NULL;
	newnode=(struct stack *)malloc(sizeof(struct stack));
	if(newnode==NULL)
	{
		printf("node not created\n");
	}
	else
	{
		newnode->data=d;
		newnode->link=top;
		top=newnode;
	}
}
int peek()
{
	return top->data;
}
int pop()
{
	int n;
	struct stack *temp=NULL;
	temp=top;
	top=top->link;
	n=temp->data;
	free(temp);
	temp=NULL;
	return n;
}
int main()
{
	int choice,data;
	while(1)
	{
		printf("1.push  2.pop  3.peek  4.exit\n");
		printf("enter ur choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("enter ur data:\n");
			       scanf("%d",&data);
			       push(data);
			       break;
			case 2:if(top==NULL)
				       printf("stack is empty\n");
			       else
				       printf("data to be poped is %d\n",pop());
			       break;
			case 3:if(top == NULL)
				       printf("stack is empty\n");
			       else
				       printf("data to be pointed to the top of the stack :%d\n",peek());
			       break;
			case 4:exit(0);
		}
	}
}
