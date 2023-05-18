#include<stdio.h>
#include<stdlib.h>
struct st{
	int data;
	struct st *link;
};
struct st *add_first(struct st *);
void display(struct st *);
void count(struct st *);
int main()
{
	struct st *head=NULL;
	int choice;
	while(1)
	{
		printf("1.add_first  2.display  3.count  4.exit\n");
		printf("enter ur choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=add_first(head);
			       break;
			case 2:display(head);
			       break;
			case 3:count(head);
			       break;
			case 4:exit(0);
		}
	}
}
struct st *add_first(struct st *ptr)
{
	struct st *newnode=NULL;
	newnode=(struct st *)malloc(sizeof(struct st));
	if(newnode==NULL)
	{
		printf("node not created\n");
	}
	else
	{
		printf("enter the data\n");
		scanf("%d",&newnode->data);
		newnode->link=NULL;
		newnode->link=ptr;
		ptr=newnode;
	}
	return ptr;
}
void display(struct st *ptr)
{
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		while(ptr!=NULL)
		{
			printf("%d\n",ptr->data);
			ptr=ptr->link;
		}
	}
}
void count(struct st *ptr)
{
	int count=0;
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		while(ptr!=NULL)
		{
			count++;
			ptr=ptr->link;
		}
		printf("number of nodes in the linked list :%d\n",count);
	}
}
