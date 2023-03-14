#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
void *thread_handler1(void *ptr)
{
	int i;
	for(i=0;i<5;i++)
	{
		sleep(2);
		printf("thread1 is runnning\n");
		printf("thread1 ID is:%lu\n",pthread_self());
		printf("thread1 msg is:%s\n",(char *)ptr);
	}
}
void *thread_handler2(void *ptr)
{
	int i;
	for(i=0;i<5;i++)
	{
		sleep(2);
		printf("thread2 is runnning\n");
		printf("thread2 ID is:%lu\n",pthread_self());
		printf("thread2 msg is :%s\n",(char *)ptr);
	}
}


int main()
{
	pthread_t thread[2];
	void *msg1="THUNDERSOFT";
	void *msg2="INDIA";
	pthread_create(&thread[0],NULL,&thread_handler1,(void *) msg1);
	pthread_create(&thread[1],NULL,&thread_handler2,(void *) msg2);
	pthread_join(thread[0],NULL);
	pthread_join(thread[1],NULL);
}
