#include<stdio.h>
#include<stdlib.h>
struct st{
	int data;
	struct st *link;
};
struct st *add_last(struct st *);
void display(struct st *);
struct st *random_insert(struct st *);
int main()
{
	struct st *head=NULL;
	int choice;
	while(1)
	{
		printf("1.add_last 2.display  3.random_insert  4.exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=add_last(head);
			       break;
			case 2:display(head);
			       break;
			case 3:head=random_insert(head);
			       break;
			case 4:exit(0);
		}
	}
}
struct st *add_last(struct st *ptr)
{
	struct st *newnode=NULL,*temp=NULL;
	newnode=(struct st *)malloc(sizeof(struct st));
	if(newnode==NULL)
	{
		printf("node not createad\n");
	}
	else
	{
		printf("enter the data\n");
		scanf("%d",&newnode->data);
		newnode->link=NULL;
		if(ptr==NULL)
		{
			ptr=newnode;
		}
		else
		{
			temp=ptr;
			while(temp->link!=NULL)
			{
				temp=temp->link;
			}
			temp->link=newnode;
		}
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

struct st *random_insert(struct st *ptr)
{
	struct st *newnode=NULL,*temp=NULL;
	int position;
	newnode=(struct st *)malloc(sizeof(struct st));
	if(newnode==NULL)
		printf("node is not created\n");
	else
	{
		printf("enter the data\n");
		scanf("%d",&newnode->data);
		newnode->link=NULL;
		printf("enter the position\n");
		scanf("%d",&position);
		temp=ptr;
		for(int i=1;i<position-1;i++)
		{
			temp=temp->link;
			if(temp==NULL)
				printf("cant insert\n");
		}
		newnode->link=temp->link;
		temp->link=newnode;
	}
	return ptr;
}
