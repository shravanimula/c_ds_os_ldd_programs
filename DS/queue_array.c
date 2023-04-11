#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int Q[MAX];
int front=-1,rear=-1;
void enq(int);
int deq();
void display();
int main()
{
	int choice,data;
	while(1)
	{
		printf("1.Enq 2.Deq 3.Display  4.exit\n");
		printf("enter your choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("enter ur data:\n");
			       scanf("%d",&data);
			       enq(data);
			       break;
			case 2:if(front==-1)
				       printf("queue is empty\n");
			       else
				       printf("dequed the elemnet is :%d\n",deq());
			       break;
			case 3:if(front == -1)
				       printf("queue is empty\n");
			       else
				       display();
			       break;
			case 4:exit(0);
		}
	}
}
void enq(int n)
{
	if(rear == MAX-1)
		printf("queue is full\n");
	else
	{
		if(front==-1)
			front=0;
		Q[++rear]=n;
	}
}
int deq()
{
	int temp;
	temp=Q[front++];
	if(front==rear+1)
		front=rear=-1;
	return temp;
}
void display()
{
	int i;
	for (i = front; i <= rear; i++)
		printf("%d ", Q[i]);
}
