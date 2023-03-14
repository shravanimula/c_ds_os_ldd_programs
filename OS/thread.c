#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
void *thread_handler()
{
	int i;
	for(i=0;i<5;i++)
	{
		sleep(2);
		printf("thread is running\n");
		printf("thread ID:%lu\n",pthread_self());
	}
}
int main()
{
	pthread_t thread;
	pthread_create(&thread,NULL,&thread_handler,NULL);
	pthread_join(thread,NULL);
}
