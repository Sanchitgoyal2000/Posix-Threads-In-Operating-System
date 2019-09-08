#include<pthread.h>
#include<stdio.h>
void *procedure(void *args);
int main()
{
	pthread_t thread1;
	pthread_t thread2;
	int a=10;
	int b=20;
	pthread_create(&thread1,NULL,procedure,&a);
	pthread_create(&thread2,NULL,procedure,&b);
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
}
void *procedure(void *args)
{
	int p=*(int *)args;
	printf("%d\n",p);
}


