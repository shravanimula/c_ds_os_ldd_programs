#include<stdio.h>
#include<stdlib.h>
struct st{
	int data;
	struct st *link;
};
void display(struct st *ptr)
{
	struct st *temp=NULL;
	if(ptr==NULL)
		printf("list is empty\n");
	else
	{
		temp=ptr;
		do{
			printf("%d\n",temp->data);
			temp=temp->link;
		}while(temp!=ptr);
	}
}
struct st *add(struct st *ptr)
{
	struct st *newnode=NULL,*temp=NULL;
	newnode=(struct st *)malloc(sizeof(struct st));
	if(newnode==NULL)
		printf("node not created\n");
	else
	{
		printf("enter the data:");
		scanf("%d",&newnode->data);
		newnode->link=NULL;
		if(ptr==NULL)
		{
			ptr=newnode;
			ptr->link=newnode;
		}
		else
		{
			temp=ptr;
			while(temp->link!=ptr)
			{
				temp=temp->link;
			}
			temp->link=newnode;
		}
		newnode->link=ptr;
	}
	return ptr;
}

int main()
{
	struct st *head=NULL;
	int choice;
	while(1)
	{
		printf("1.add  2.display  3.exit\n");
		printf("enter ur choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=add(head);
			       break;
			case 2:display(head);
			       break;
			case 3:exit(0);
		}
	}
}

