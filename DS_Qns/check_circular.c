#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct st{
	int data;
	struct st *link;
};
struct st *add_last(struct st *);
void display(struct st *);
bool iscircularor_not(struct st *);
int main()
{
	struct st *head=NULL;
	int choice;
	while(1)
	{
		printf("1.add_last 2.display  3.circular_not   4.exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=add_last(head);
			       break;
			case 2:display(head);
			       break;
			case 3:if(iscircularor_not(head))
				       printf("list ia circular\n");
			       else
				       printf("list is not circular\n");
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
bool iscircularor_not(struct st *ptr)
{
	struct st *temp=NULL;
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		temp=ptr;
		while(temp!=NULL)
		{
			if(temp->link==ptr)
				return true;
			temp=temp->link;
		}
	}
	return false;
}
