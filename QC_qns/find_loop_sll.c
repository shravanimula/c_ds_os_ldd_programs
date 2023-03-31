#include<stdio.h>
#include<stdlib.h>
struct st {
	int data;
	struct st *link;
};
struct st *add_last(struct st *ptr)
{
	struct st *newnode=NULL,*temp=NULL;
	newnode=(struct st *) malloc(sizeof(struct st));
	if(newnode==NULL)
	{
		printf("node not created\n");
	}
	else
	{
		printf("enter the data:");
		scanf("%d",&newnode->data);
		newnode->link==NULL;
		if(ptr==NULL)
		{
			ptr=newnode;
			ptr->link=NULL;
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
	if(ptr ==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		while(ptr)
		{
			printf("%d\n",ptr->data);
			ptr=ptr->link;
		}
	}
}

void find_loop(struct st *ptr)
{
	struct st *slow=NULL,*fast=NULL;
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		slow=fast=ptr;
		while(slow !=NULL && fast !=NULL && fast->link !=NULL)
		{
			slow=slow->link;
			fast=fast->link->link;
		}
		if(slow == fast )
		{
			printf(" list having the loop\n");
		}
		else
		{
			printf("list is not  having loop\n");
		}
	}
}

int main()
{
	struct st *head=NULL;
	int choice;
	while(1)
	{
		printf("1.add_last 2.display  3.find_loop  4.exit\n");
		printf("enter ur choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=add_last(head);
			       break;
			case 2:display(head);
			       break;
			case 3:find_loop(head);
			       break;
			case 4:exit(0);
		}
	}
}

