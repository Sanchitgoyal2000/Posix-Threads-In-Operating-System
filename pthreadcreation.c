#include<pthread.h>
#include<stdio.h>
void *procedure(void *args);
int main()
{
	pthread_t thread1;
	pthread_t thread2;
	pthread_create(&thread1,NULL,procedure,NULL);
	pthread_create(&thread2,NULL,procedure,NULL);
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
}
void *procedure(void *args)
{
	printf("Thread Created\n");
}

/*

Pthread is basically a structure like struct in c in which various methods are defined.
*/


