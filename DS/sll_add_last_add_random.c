#include<stdio.h>
#include<stdlib.h>
struct st{
	int data;
	struct st *link;
};
struct st *add_last(struct st *);
struct st *add_random(struct st *);
void display(struct st *);
void count_nodes_sll(struct st *);
int main()
{
	struct st *head=NULL;
	int choice;
	while(1)
	{
		printf("1>add_last   2>add_random   3>display   4>count_node_sll   5>exit\n");
		printf("enter ur choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=add_last(head);
			       break;
			case 2:head=add_random(head);
			       break;
			case 3:display(head);
			       break;
			case 4:count_nodes_sll(head);
			       break;
			case 5:exit(0);
		}
	}
}
struct st *add_last(struct st *ptr)
{
	struct st *newnode=NULL,*temp=NULL;
	newnode=(struct st *)malloc(sizeof(struct st));
	if(newnode==NULL)
		printf("node is not created\n");
	else
	{
		printf("enter the data:");
		scanf("%d",&newnode->data);
		newnode->link=NULL;
		if(ptr==NULL)
		{
			ptr=newnode;
		}
		else
		{
			temp=ptr;
			while(temp->link != NULL)
			{
				temp=temp->link;
			}
			temp->link=newnode;
		}
	}
	return ptr;
}
void count_nodes_sll(struct st *ptr)
{
	int count=0;
	if(ptr == NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		while(ptr != NULL)
		{
			count ++;
			ptr=ptr->link;
		}
		printf("count the nodes in the linked list is:%d\n",count);
	}
}
void display(struct st *ptr)
{
	if(ptr==NULL)
		printf("list is empty\n");
	else
	{
		while(ptr != NULL)
		{
			printf("%d\n",ptr->data);
			ptr=ptr->link;
		}
	}
}
struct st *add_random(struct st *ptr)
{
	int data,position,i;
	struct st *newnode=NULL,*temp=NULL;
	newnode=(struct st *)malloc(sizeof(struct st ));
	if(newnode == NULL)
		printf("node not created\n");
	else
	{
		printf("enter the data:\n");
		scanf("%d",&newnode->data);
		newnode->link=NULL;
		printf("enter the position to add the element:");
		scanf("%d",&position);
		temp=ptr;
		for(i=1;i<position-1;i++)
		{
			temp=temp->link;
			if(temp==NULL)
			{
				printf("cant insert\n");
			}
		}
		newnode->link=temp->link;
		temp->link=newnode;
	}
	return ptr;
}
