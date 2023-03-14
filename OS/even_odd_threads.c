#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#define SIZE 20
int array[SIZE];

void *even_num()
{
	int i;
	for(i=1;i<=SIZE;i++)
	{
		if(i % 2 == 0)
		{
			sleep(1);
			array[i]=i;
			printf("%d\t",array[i]);
		}
	}
}

void *odd_num()
{
	int i;
	for(i=1;i<=SIZE;i++)
	{
		if(i % 2 == 1)
		{
			sleep(1);
			array[i]=i;
			printf("%d\t",array[i]);
		}
	}
}

int main()
{
	pthread_t thread[2];
	pthread_create(&thread[0],NULL,&even_num,NULL);
	pthread_create(&thread[1],NULL,&odd_num,NULL);
	pthread_join(thread[0],NULL);
	pthread_join(thread[1],NULL);
	printf("\n");
}
