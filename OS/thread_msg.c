#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
void *thread_handler(void *ptr)
{
	int i;
	for(i=0;i<=5;i++)
	{
		sleep(2);
		printf("thread is running\n");
		printf("thread ID is:%lu\n",pthread_self());
		printf("thread msg is:%s\n",(char *) ptr);
	}
}


int main()
{
	pthread_t thread;
	void *msg="THUNDERSOFT";
	pthread_create(&thread,NULL,&thread_handler,(void *) msg);
	pthread_join(thread,NULL);
}
